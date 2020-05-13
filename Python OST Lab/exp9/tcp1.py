import socket
s = socket.socket()
host = socket.gethostname()
port = 1234
s.bind((host, port))
s.listen(5)
while True:
    print ('Now looking to accept the client')
    c, addr = s.accept()
    print ('Got connection from:', addr)
    c.send(b'Hello i am the server')
    c.close()
    
