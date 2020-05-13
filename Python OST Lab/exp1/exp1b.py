print"!!!!!!!HELLO WORLD !!!!!!!"
print "---------------------------------------"
a=input("ENTER THE VALUE OF A")
b=input("ENTER THE VALUE OF B")
print "THE ADDITION IS : ",a+b
print "THE SUBTRACTION IS :",a-b 
print "THE MULTIPLICATION IS :",a*b 
print "THE DIVISION IS :",a/b 
print "THE FLOOR DIVISION IS :",a//b 
print "THE MODULO REMAINDER IS :",a%b
print "---------------------------------------"
print "IS A>B ",a>b
print "IS A<B ",a<b
print "IS A>=B ",a>=b
print "IS A<=B ",a<=b
print "IS A==B ",a==b
print "IS A!=B ",a!=b
print "---------------------------------------"
print "A BITWISE and B ",a&b
print "A BITWISE or B ",a|b
print "A BITWISE exor B ",a^b
print "A negation B negation ",~a,~b
print "A BITWISE left shift B ",a<<b
print "IS A BITWISE right shift B ",a>>b
print "---------------------------------------"
a=input("ENTER THE VALUE OF A")
b=input("ENTER THE VALUE OF B")
a+=b
print "A=A+B ",a
a=input("ENTER THE VALUE OF A")
b=input("ENTER THE VALUE OF B")
a*=b
print "A=A*B ",a
print "---------------------------------------"
s=input("ENTER A STRING")
a=input("ENTER CHARACTER TO CHECK OCCURRENCE")
print "OCCURRENCE OF your character IN STRING"
print(a in  s)
print "OCCURRENCE OF your character not IN STRING"
print(a not in s)
print "---------------------------------------"
x=input("ENTER A NUMBER x")
y=input("ENTER A NUMBER y")
print "MEMORY LOCATION OF X:",id(x)
print "MEMORY LOCATION OF Y:",id(y)
print "X IS Y?",x is y
print "X IS NOT Y?",x is not y
s=input("ENTER A STRING s")
r=input("ENTER A STRING r")
print "S IS R?",s is r
print "S IS NOT R?",s is not r

'''
[student@localhost]$ python exp1b.py
!!!!!!!HELLO WORLD !!!!!!!
---------------------------------------
ENTER THE VALUE OF A 12
ENTER THE VALUE OF B 45
THE ADDITION IS :  57
THE SUBTRACTION IS : -33
THE MULTIPLICATION IS : 540
THE DIVISION IS : 0
THE FLOOR DIVISION IS : 0
THE MODULO REMAINDER IS : 12
---------------------------------------
IS A>B  False
IS A<B  True
IS A>=B  False
IS A<=B  True
IS A==B  False
IS A!=B  True
---------------------------------------
A BITWISE and B  12
A BITWISE or B  45
A BITWISE exor B  33
A negation B negation  -13 -46
A BITWISE left shift B  422212465065984
IS A BITWISE right shift B  0
---------------------------------------
ENTER THE VALUE OF A 12
ENTER THE VALUE OF B 45
A=A+B  57
ENTER THE VALUE OF A 12
ENTER THE VALUE OF B 45
A=A*B  540
---------------------------------------
ENTER A STRING'HARSH'
ENTER CHARACTER TO CHECK OCCURRENCE'A'
OCCURRENCE OF your character IN STRING
True
OCCURRENCE OF your character not IN STRING
False
---------------------------------------
ENTER A NUMBER x 12
ENTER A NUMBER y 14
MEMORY LOCATION OF X: 31162448
MEMORY LOCATION OF Y:
Traceback (most recent call last):
  File "10exp2.py", line 45, in <module>
    print "MEMORY LOCATION OF Y:",Sid(y)
NameError: name 'Sid' is not defined
[student@localhost rollno10b]$ python 10exp2.py
!!!!!!!HELLO WORLD !!!!!!!
---------------------------------------
ENTER THE VALUE OF A 12
ENTER THE VALUE OF B 45
THE ADDITION IS :  57
THE SUBTRACTION IS : -33
THE MULTIPLICATION IS : 540
THE DIVISION IS : 0
THE FLOOR DIVISION IS : 0
THE MODULO REMAINDER IS : 12
---------------------------------------
IS A>B  False
IS A<B  True
IS A>=B  False
IS A<=B  True
IS A==B  False
IS A!=B  True
---------------------------------------
A BITWISE and B  12
A BITWISE or B  45
A BITWISE exor B  33
A negation B negation  -13 -46
A BITWISE left shift B  422212465065984
IS A BITWISE right shift B  0
---------------------------------------
ENTER THE VALUE OF A 1
ENTER THE VALUE OF B 2
A=A+B  3
ENTER THE VALUE OF A 1
ENTER THE VALUE OF B 3
A=A*B  3
---------------------------------------
ENTER A STRING'HARSH'
ENTER CHARACTER TO CHECK OCCURRENCE'A'
OCCURRENCE OF your character IN STRING
True
OCCURRENCE OF your character not IN STRING
False
---------------------------------------
ENTER A NUMBER x 23
ENTER A NUMBER y 45
MEMORY LOCATION OF X: 12009288
MEMORY LOCATION OF Y: 12010752
X IS Y? False
X IS NOT Y? True
ENTER A STRING s'QWERTY'
ENTER A STRING r'FASDGH'
S IS R? False
S IS NOT R? True
[student@localhost rollno10b]$ '''
