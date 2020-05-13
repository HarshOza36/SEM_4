import socket
server_socket = socket.socket()
name = socket.gethostname()
server_address = socket.gethostbyname(name)

server_port = 4567
server_socket.bind((server_address,server_port))
server_socket.listen(5)

while True:
    c , address = server_socket.accept()
    print ("we got connection from", address)
    c.send(b"hello, how r u?")
    c.close()
