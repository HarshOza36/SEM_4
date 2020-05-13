import socket
udp_s=socket.socket(socket.AF_INET,socket.SOCK_DGRAM)
port=2456
ip='0.0.0.0'
udp_s.bind((ip,port))
while True:
    data,address=udp_s.recvfrom(1024)
    print("data from client=",data)
    udp_s.sendto(b"hello client",(ip,port))
