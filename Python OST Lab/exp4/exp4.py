ch=0
while(ch!=7):
	print"******************MENU*******************************"
	print"1.ACCEPTING 2 STRINGS 2.DISPLAY COMMON LETTERS IN THEM"
	print"3.DISPLAY LETTERS IN 1st BUT NOT in 2nd 4.DISPLAY LETTERS IN BOTH"
	print"5.DISPLAY LETTER IN STRINGS BUT NOT IN BOTH" 
	print"6.DIFFERENCE OF SHALLOW COPY AND ASSIGN COPY 7.EXIT"
	ch=input("ENTER YOUR CHOICE>>")
	if(ch==1):
		str1=input("ENTER STRING 1>>")
		print str1
		str2=input("ENTER STRING 2>>")
		print str2
		s1=set(str1)
		s2=set(str2)
    	elif ch==2:
		print"SET 1>>",s1
		print"SET 2>>",s2
		print"COMMON LETTERS IN THE STRING>>>",s1.intersection(s2)
    	elif ch==3:
		print"SET 1>>",s1
		print"SET 2>>",s2
		print"LETTERS WHICH ARE IN FIRST STRING BUT NOT IN SECOND>>>",s1.difference(s2)
    	elif ch==4:
		print"SET 1>>",s1
		print"SET 2>>",s2
		print"SET OF ALL LETTERS OF BOTH STRINGS>>>",s1.union(s2)
    	elif ch==5:
		print"SET 1>>",s1
		print"SET 2>>",s2
		print"LETTERS in TWO STRINGS BUT NOT IN BOTH>>>",s1.symmetric_difference(s2)
	elif ch==6:
		s3={}
		s4={}
		print"USING ASSIGN COPY"
		print"COPYING SET S1 TO NEW STRING............"
		s3=s1
		print"NEW SET>>>>",s3
		n=input("ENTER A CHARACTER TO ADD>>")
		s3.add(n)
		print"NEW SET AFTER ADDING>>",s3
		print"OLD SET AFTER ASSIGN COPY>>",s1
		print"USING SHALLOW COPY"
		print"COPYING SET S2 TO NEW STRING............"
		s4=s2.copy()
		print"NEW SET>>>>",s4
		y=input("ENTER A CHARACTER TO ADD>>")
		s4.add(y)
		print"NEW SET AFTER ADDING>>",s4
		print"OLD SET AFTER SHALLOW COPY>>",s2
	elif ch==7:
		print"EXIT!!!"
	else:
		print"INVALID CHOICE!!!"
'''
OUTPUT:
[student@localhost]$ python exp4.py
******************MENU*******************************
1.ACCEPTING 2 STRINGS 2.DISPLAY COMMON LETTERS IN THEM
3.DISPLAY LETTERS IN 1st BUT NOT in 2nd 4.DISPLAY LETTERS IN BOTH
5.DISPLAY LETTER IN STRINGS BuT NOT IN BOTH 
6.DIFFERENCE OF COPY AND ASSIGN 7.EXIT
ENTER YOUR CHOICE>>1  
ENTER STRING 1>>"hello"
hello
ENTER STRING 2>>"world"
world
******************MENU*******************************
1.ACCEPTING 2 STRINGS 2.DISPLAY COMMON LETTERS IN THEM
3.DISPLAY LETTERS IN 1st BUT NOT in 2nd 4.DISPLAY LETTERS IN BOTH
5.DISPLAY LETTER IN STRINGS BuT NOT IN BOTH 
6.DIFFERENCE OF COPY AND ASSIGN 7.EXIT
ENTER YOUR CHOICE>>2
SET 1>> set(['h', 'e', 'l', 'o'])
SET 2>> set(['d', 'r', 'o', 'w', 'l'])
COMMON LETTERS IN THE STRING>>> set(['l', 'o'])
******************MENU*******************************
1.ACCEPTING 2 STRINGS 2.DISPLAY COMMON LETTERS IN THEM
3.DISPLAY LETTERS IN 1st BUT NOT in 2nd 4.DISPLAY LETTERS IN BOTH
5.DISPLAY LETTER IN STRINGS BuT NOT IN BOTH 
6.DIFFERENCE OF COPY AND ASSIGN 7.EXIT
ENTER YOUR CHOICE>>3
SET 1>> set(['h', 'e', 'l', 'o'])
SET 2>> set(['d', 'r', 'o', 'w', 'l'])
LETTERS WHICH ARE IN FIRST STRING BUT NOT IN SECOND>>> set(['h', 'e'])
******************MENU*******************************
1.ACCEPTING 2 STRINGS 2.DISPLAY COMMON LETTERS IN THEM
3.DISPLAY LETTERS IN 1st BUT NOT in 2nd 4.DISPLAY LETTERS IN BOTH
5.DISPLAY LETTER IN STRINGS BuT NOT IN BOTH 
6.DIFFERENCE OF COPY AND ASSIGN 7.EXIT
ENTER YOUR CHOICE>>4
SET 1>> set(['h', 'e', 'l', 'o'])
SET 2>> set(['d', 'r', 'o', 'w', 'l'])
SET OF ALL LETTERS OF BOTH STRINGS>>> set(['e', 'd', 'h', 'l', 'o', 'r', 'w'])
******************MENU*******************************
1.ACCEPTING 2 STRINGS 2.DISPLAY COMMON LETTERS IN THEM
3.DISPLAY LETTERS IN 1st BUT NOT in 2nd 4.DISPLAY LETTERS IN BOTH
5.DISPLAY LETTER IN STRINGS BuT NOT IN BOTH 
6.DIFFERENCE OF COPY AND ASSIGN 7.EXIT
ENTER YOUR CHOICE>>5
SET 1>> set(['h', 'e', 'l', 'o'])
SET 2>> set(['d', 'r', 'o', 'w', 'l'])
LETTERS in TWO STRINGS BUT NOT IN BOTH>>> set(['e', 'd', 'h', 'r', 'w'])
******************MENU*******************************
1.ACCEPTING 2 STRINGS 2.DISPLAY COMMON LETTERS IN THEM
3.DISPLAY LETTERS IN 1st BUT NOT in 2nd 4.DISPLAY LETTERS IN BOTH
5.DISPLAY LETTER IN STRINGS BUT NOT IN BOTH
6.DIFFERENCE OF SHALLOW COPY AND ASSIGN COPY 7.EXIT
ENTER YOUR CHOICE>>6
USING ASSIGN COPY
COPYING SET S1 TO NEW STRING............
NEW SET>>>> set(['h', 'e', 'l', 'o'])
ENTER A CHARACTER TO ADD>>"k"
NEW SET AFTER ADDING>> set(['h', 'k', 'e', 'l', 'o'])
OLD SET AFTER ASSIGN COPY>> set(['h', 'k', 'e', 'l', 'o'])
USING SHALLOW COPY
COPYING SET S2 TO NEW STRING............
NEW SET>>>> set(['w', 'r', 'd', 'o', 'l'])
ENTER A CHARACTER TO ADD>>"k"
NEW SET AFTER ADDING>> set(['d', 'k', 'l', 'o', 'r', 'w'])
OLD SET AFTER SHALLOW COPY>> set(['d', 'r', 'o', 'w', 'l'])
******************MENU*******************************
1.ACCEPTING 2 STRINGS 2.DISPLAY COMMON LETTERS IN THEM
3.DISPLAY LETTERS IN 1st BUT NOT in 2nd 4.DISPLAY LETTERS IN BOTH
5.DISPLAY LETTER IN STRINGS BuT NOT IN BOTH 
6.DIFFERENCE OF COPY AND ASSIGN 7.EXIT
ENTER YOUR CHOICE>>7
EXIT!!!
'''
