"""PROBLEMS ON DICTIONARY"""
ch=0
while(ch!=6):
	print"*************MENU****************"
	print"1.CREATE KEY/VALUE PAIR DICTIONARY 2.UPDATE CONCATENATE AND DELETE ITEM"
	print"3.FIND KEY AND PRINT VALUE 4.MAP TWO LISTS IN DICTIONARY"
	print"5.SORT DICTIONARY USING KEYS 6.EXIT"
	ch=input("ENTER YOUR CHOICE>>>")
	if(ch==1):
		d={}
		n=input("ENTER THE NUMBER OF VALUES YOU WANT>>>")
		for i in range (0,n):
			key=input("ENTER THE KEY>>>")
			value=input("ENTER THE VALUE>>>")
			d.update({key:value})
		print d
	elif(ch==2):
		k=input("ENTER KEY TO UPDATE>>>")
		v=input("ENTER THE VALUE OF KEY>>>")
		d.update({k:v})
		print d
		d1={}
		n1=input("ENTER THE NUMBER OF VALUES YOU WANT>>>")
		for i in range (0,n1):
			key1=input("ENTER THE KEY>>>")
			value1=input("ENTER THE VALUE>>>")
			d1.update({key1:value1})
		print d1
		d.update(d1)
		print"CONCATENATED BOTH LISTS\n",d
		o=input("ENTER THE KEY TO DELETE ELEMENT>>>")
		del d[o]
		print d
	elif(ch==3):
		print"FIND A VALUE USING KEY"		
		r=input("ENTER KEY TO FIND THE VALUE>>>")
		if(r in d):
			print(d[r])
		else:
			print"ENTERED KEY NOT IN DICTIONARY>>>"
	elif(ch==4):
		print"MAPPING TO LISTS"
		d3={}		
		l1=[]
		l2=[]
		n2=input("ENTER THE MAX ELEMENTS for list1 >>> ")
		for i in range(0,n2):
			x=input("ENTER ELEMENTS>>> ")
			l1.append(x)
		print l1
		n3=input("ENTER THE MAX ELEMENTS for list2 >>> ")
		for i in range(0,n3):
			x=input("ENTER ELEMENTS>>> ")
			l2.append(x)
		print l2
		d3=dict(zip(l1,l2))
		print d3	
	elif(ch==5):
		print"SORTING  ABOVE DICTIONARY USING KEYS"		
		for key in sorted(d3.keys()):
			print key,":",d3[key]
	elif(ch==6):
		print"EXIT!!!!!"
	else:
		print"INVALID CHOICE!!!"
"""OUTPUT:
[student@localhost ~]$ python exp3bdict.py
*************MENU****************
1.CREATE KEY/VALUE PAIR DICTIONARY 2.UPDATE CONCATENATE AND DELETE ITEM
3.FIND KEY AND PRINT VALUE 4.MAP TWO LISTS IN DICTIONARY
5.SORT DICTIONARY USING KEYS 6.EXIT
ENTER YOUR CHOICE>>>1
ENTER THE NUMBER OF VALUES YOU WANT>>>3
ENTER THE KEY>>>(1,2)
ENTER THE VALUE>>>[2,3,4]
ENTER THE KEY>>>"s"
ENTER THE VALUE>>>34
ENTER THE KEY>>>234
ENTER THE VALUE>>>432
{(1, 2): [2, 3, 4], 's': 34, 234: 432}
*************MENU****************
1.CREATE KEY/VALUE PAIR DICTIONARY 2.UPDATE CONCATENATE AND DELETE ITEM
3.FIND KEY AND PRINT VALUE 4.MAP TWO LISTS IN DICTIONARY
5.SORT DICTIONARY USING KEYS 6.EXIT
ENTER YOUR CHOICE>>>2
ENTER KEY TO UPDATE>>>678
ENTER THE VALUE OF KEY>>>876
{(1, 2): [2, 3, 4], 's': 34, 234: 432, 678: 876}
ENTER THE NUMBER OF VALUES YOU WANT>>>2
ENTER THE KEY>>>1
ENTER THE VALUE>>>2
ENTER THE KEY>>>4
ENTER THE VALUE>>>5
{1: 2, 4: 5}
CONCATENATED BOTH LISTS
{(1, 2): [2, 3, 4], 1: 2, 's': 34, 4: 5, 678: 876, 234: 432}
ENTER THE KEY TO DELETE ELEMENT>>>"s"
{(1, 2): [2, 3, 4], 1: 2, 4: 5, 678: 876, 234: 432}
*************MENU****************
1.CREATE KEY/VALUE PAIR DICTIONARY 2.UPDATE CONCATENATE AND DELETE ITEM
3.FIND KEY AND PRINT VALUE 4.MAP TWO LISTS IN DICTIONARY
5.SORT DICTIONARY USING KEYS 6.EXIT
ENTER YOUR CHOICE>>>3
FIND A VALUE USING KEY
ENTER KEY TO FIND THE VALUE>>>678
876
*************MENU****************
1.CREATE KEY/VALUE PAIR DICTIONARY 2.UPDATE CONCATENATE AND DELETE ITEM
3.FIND KEY AND PRINT VALUE 4.MAP TWO LISTS IN DICTIONARY
5.SORT DICTIONARY USING KEYS 6.EXIT
ENTER YOUR CHOICE>>>4
MAPPING TO LISTS
ENTER THE MAX ELEMENTS for list1 >>> 3
ENTER ELEMENTS>>> 1
ENTER ELEMENTS>>> 2
ENTER ELEMENTS>>> 0
[1, 2, 0]
ENTER THE MAX ELEMENTS for list2 >>> 3
ENTER ELEMENTS>>> "a"
ENTER ELEMENTS>>> "b"
ENTER ELEMENTS>>> "c"
['a', 'b', 'c']
{0: 'c', 1: 'a', 2: 'b'}
*************MENU****************
1.CREATE KEY/VALUE PAIR DICTIONARY 2.UPDATE CONCATENATE AND DELETE ITEM
3.FIND KEY AND PRINT VALUE 4.MAP TWO LISTS IN DICTIONARY
5.SORT DICTIONARY USING KEYS 6.EXIT
ENTER YOUR CHOICE>>>5
SORTING  ABOVE DICTIONARY USING KEYS
0 : c
1 : a
2 : b
*************MENU****************
1.CREATE KEY/VALUE PAIR DICTIONARY 2.UPDATE CONCATENATE AND DELETE ITEM
3.FIND KEY AND PRINT VALUE 4.MAP TWO LISTS IN DICTIONARY
5.SORT DICTIONARY USING KEYS 6.EXIT
ENTER YOUR CHOICE>>>6
EXIT!!!!!

"""






















