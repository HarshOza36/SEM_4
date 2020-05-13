import socket
client_socket = socket.socket()
#name = socket.gethostname()
#server_address = socket.gethostbyname(name)
server_port = 4567
client_socket.connect(('192.168.56.1',server_port))
print (client_socket.recv(1024))

client_socket.close()
