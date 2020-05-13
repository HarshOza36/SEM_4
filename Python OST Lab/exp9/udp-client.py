import socket

msgFromClient       = "Hello UDP Server"
bytesToSend         = str.encode(msgFromClient)
port=5001
name=socket.gethostname()
ip=socket.gethostbyname(name)
serverAddressPort   = (ip, port)
bufferSize          = 1024

# Create a UDP socket at client side
s1 = socket.socket(family=socket.AF_INET, type=socket.SOCK_DGRAM)

# Send to server using created UDP socket
s1.sendto(bytesToSend, serverAddressPort)
msgFromServer = s1.recvfrom(bufferSize)
msg = "Message from Server {}".format(msgFromServer[0])
print(msg)
