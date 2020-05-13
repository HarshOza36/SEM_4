n=input("ENTER A STRING")
l=len(n)
s=n
if(s[::-1]==n):
	print"YAY!!PALINDROME FOUND"
else:
	print"OH!!NO PALINDROME FOUND"
print"--------------------------------------------"
a=input("ENTER A STRING")
count=0
i=0
vowels='aeiouAEIOU'
for i in a:
	if(i in vowels):
		count=count+1
		print i
print"COUNT IS: ",count
print"--------------------------------------------"		
b=input("ENTER A STRING")
l=len(b)
if(l>2):
	if(b[-3:]=='ing'):
		print b+"ly"

	else:
		print b+'ing'
else:
	print"ENTER VALID STRING WITH MORETHAN 2 LETTERS"
print"--------------------------------------------"
d=input("ENTER A NUMBER1  :")
e=input("ENTER A NUMBER2  :")
f=input("ENTER A NUMBER3  :")
if(d>e):
	if(d>f):
		print"THE GREATEST",d
	else:
		print"THE GREATEST",f
elif(e>f):
	print"THE GREATEST",e
else:	
	print"THE GREATEST",f
