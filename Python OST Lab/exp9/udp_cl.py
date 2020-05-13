import socket
udp_c=socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
port=2456
ip='127.0.0.1'
udp_c.sendto(b"hello server",(ip,port))
print(udp_c.recvfrom(1024))
