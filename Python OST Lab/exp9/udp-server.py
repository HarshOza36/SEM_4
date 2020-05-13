import socket
s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

port = 5001
buffersize=1024
msgfromserver='hello UDP client'
bytestosend=str.encode(msgfromserver)
name=socket.gethostname()
ip=socket.gethostbyname(name)

s.bind((ip, port))
print ("UDP server up and waiting on port:", port)

while 1:
    bytesAddressPair = s.recvfrom(buffersize)
    message = bytesAddressPair[0]
    address = bytesAddressPair[1]
    clientMsg = "Message from Client:{}".format(message)
    clientIP  = "Client IP Address:{}".format(address)
    print(clientMsg)
    print(clientIP)

    s.sendto(bytestosend,address)
