ch=0
while(ch!=3):
        print"-----------------MENU-------------------"
        print"1. CLASS PROBLEMS   2. FIBONACCI SERIES 3.EXIT"
        ch=input("ENTER YOUR CHOICE>>")
        if(ch==1):
                class accholder:
                        total=0
                        def __init__(self,accno,name,age,balance):
                                self.accno=accno
                                self.name=name
                                self.age=age
                                self.balance=balance
                                accholder.total=accholder.total+1
                        def display(self):
                                print"ACCOUNT NUMBER>>",self.accno
                                print"NAME>>",self.name
                                print"AGE>>",self.age
                                print"BALANCE>>",self.balance
                        def __str__(self):
                                return("NAME IS>>{} & BALANCE IS>>{:10.2f}".format(self.name,self.balance))
                        def update(self,newbalance):
                                print"LAST BALANCE>>",self.balance
                                self.balance=newbalance
                                print"UPDATED BALANCE>>",self.balance
                        @staticmethod
                        def totall():
                                print"TOTAL NUMBER OF ACC.HOLDERS>>",accholder.total
                a=input("ENTER ACCOUNT NUMBER #1>>")
                b=input("ENTER NAME #1>>")
                c=input("ENTER AGE #1>>")
                d=input("ENTER BALANCE #1>>")
                o1=accholder(a,b,c,d)
                o1.display()
                print"------------------------------"
                print"PROBLEM STATEMENT 2"
                print o1
                print"------------------------------"
                print"PROBLEM STATEMENT 3"
                m=input("UPDATE YOUR BALANCE>>")
                o1.update(m)
                a1=input("ENTER ACCOUNT NUMBER #2>>")
                b1=input("ENTER NAME #2>>")
                c1=input("ENTER AGE #2>>")
                d1=input("ENTER BALANCE #2>>")
                o2=accholder(a1,b1,c1,d1)
                o2.display()
                accholder.totall()
                print"------------------------------"
                print"PROBLEM STATEMENT 4"
                print"LETS CHANGE #2 DETAILS"
                class savingacc(accholder):
                        def update(self,newname):
                                print"LAST NAME>>",self.name
                                self.name=newname
                                print"UPDATED BALANCE>>",self.name
                class loanacc(accholder) 	:
                        def update(self,newage):		
                                print"LAST AGE>>",self.age
                                self.age=newage
                                print"UPDATED AGE>>",self.age
                o3=savingacc(a1,b1,c1,d1)
                o4=loanacc(a,b1,c1,d1)
                na=input("UPDATE YOUR NAME>>")
                o3.update(na)
                agee=input("UPDATE YOUR AGE>>")
                o4.update(agee)
        elif(ch==2):
                print"------------------------------"
                print"PART B"
                print"FIBONACCI SERIES USING RECURSION"
                def fibo(n):
                        if(n==0):
                                return 0
                        elif(n==1):
                                return 1
                        else:
                                return (fibo(n-1) + fibo(n-2))
                nu=input("Enter the nth number>>")
                for i in range(nu):
                        print fibo(i)
        else:
                print"INVALID CHOICE!!!"
"""
OUTPUT:
[student@localhost]$ python exp5.py
 -----------------MENU-------------------
1. CLASS PROBLEMS   2. FIBONACCI SERIES 3.EXIT
ENTER YOUR CHOICE>>1
ENTER ACCOUNT NUMBER #1>>343453
ENTER NAME #1>>"H"
ENTER AGE #1>>20
ENTER BALANCE #1>>50000
ACCOUNT NUMBER>> 343453
NAME>> H
AGE>> 20
BALANCE>> 50000
------------------------------
PROBLEM STATEMENT 2
NAME IS>>H & BALANCE IS>>  50000.00
------------------------------
PROBLEM STATEMENT 3
UPDATE YOUR BALANCE>>999999
LAST BALANCE>> 50000
UPDATED BALANCE>> 999999
ENTER ACCOUNT NUMBER #2>>3454
ENTER NAME #2>>"A"
ENTER AGE #2>>20
ENTER BALANCE #2>>45000
ACCOUNT NUMBER>> 3454
NAME>> A
AGE>> 20
BALANCE>> 45000
TOTAL NUMBER OF ACC.HOLDERS>> 2
 -----------------MENU-------------------
1. CLASS PROBLEMS   2. FIBONACCI SERIES 3.EXIT
ENTER YOUR CHOICE>>2
------------------------------
PROBLEM STATEMENT 4
LETS CHANGE #2 DETAILS
UPDATE YOUR NAME>>"UP"
LAST NAME>> A
UPDATED BALANCE>> UP
UPDATE YOUR AGE>>30
LAST AGE>> 20
UPDATED AGE>> 30
------------------------------
PART B
FIBONACCI SERIES USING RECURSION
Enter the nth number>>10
0
1
1
2
3
5
8
13
21
34

"""

