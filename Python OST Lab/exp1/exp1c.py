n1=input("ENTER A BINARY  ")
n2=input("ENTER A Octal   ")
n3=input("ENTER A HEX    ")
print"the conversion of binary entered is ", int(n1)
print"the conversion of binary entered is " ,int(n2)
print"the conversion of binary entered is " ,int(n3)
print"-------------------------------------------------"
dec=input("ENTER A DECIMAL TO CONVERT IN ALL FORMATS  ")
print"THE BINARY IS ",bin(dec)
print"THE BINARY IS ",oct(dec)
print"THE BINARY IS ",hex(dec)
print"-------------------------------------------------"
a=input("ENTER Real no ")
b=input("ENTER Imaginary no ")
print"COMPLEX IS ",complex(a,b)
print"-------------------------------------------------"
print"PROGRAM FOR PALINDROME"
n=input("ENTER SOMETHING FOR PALINDROME CHECK  ")
s=0
t=n
i=0
while(n!=0):
	i=n%10
	s=s*10+i
	n=n/10
if(s==t):
	print"YAY!!PALINDROME FOUND"
else:
	print"OH!!NO PALINDROME FOUND"
print"-------------------------------------------------"
print"PROGRAM FOR ARMSTRONG NUMBER"
n=input("ENTER SOMETHING FOR ARMSTRONG NO CHECK  ")
i=0
cube=0
sum=0
t=n
while(n!=0):
	i=n%10
	cube=pow(i,3)
	sum=sum+cube
	n=n/10
if(sum==t):
	print"YAY!!ARMSTRONG NUMBER FOUND"
else:
	print"OH!!NO ARMSTRONG NUMBER FOUND"
'''
OUTPUT:
[student@localhost]$ python exp1c.py
ENTER A BINARY  0b1010
ENTER A Octal   0o134
ENTER A HEX    0x9af
the conversion of binary entered is  10
the conversion of binary entered is  92
the conversion of binary entered is  2479
-------------------------------------------------
ENTER A DECIMAL TO CONVERT IN ALL FORMATS  10
THE BINARY IS  0b1010
THE BINARY IS  012
THE BINARY IS  0xa
-------------------------------------------------
ENTER Real no 1
ENTER Imaginary no 2
COMPLEX IS  (1+2j)
-------------------------------------------------
PROGRAM FOR PALINDROME
ENTER SOMETHING FOR PALINDROME CHECK  121
YAY!!PALINDROME FOUND
-------------------------------------------------
PROGRAM FOR ARMSTRONG NUMBER
ENTER SOMETHING FOR ARMSTRONG NO CHECK  153
YAY!!ARMSTRONG NUMBER FOUND
'''

