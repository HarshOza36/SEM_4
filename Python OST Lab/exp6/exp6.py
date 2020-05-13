import re
f=open("sample.txt","w")
f.write("abcde africa america")
f.close()
f=open("sample.txt","r")
pattern1=f.read().lower()
print(pattern1)
pattern2=re.findall(r'[ae]\W+',pattern1)
print(pattern2)
f.close()
with open("sample.txt","r") as f:
          list=f.readlines()
          print(list)
day='2014-03-02'
newday=re.sub(r'(\d{4})-(\d{1,2})-(\d{1,2})','\\3-\\2-\\1',day)
print(newday)
#problemstatement1
f=open("sample.txt","r")
text_string=f.read().lower()
pattern3=re.findall(r'[a-zA-Z]{3,15}',text_string)
frequency=[]
for w in pattern3:
    frequency.append(pattern3.count(w))
print(frequency)
d=dict(zip(pattern3,frequency))
print(d)
