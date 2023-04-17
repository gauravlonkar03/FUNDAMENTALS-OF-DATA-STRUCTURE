# Write a Python program to store marks scored in subject “Fundamental of Data Structure” by N students in the class. Write functions to compute following: a) The average score of class b) Highest score and lowest score of class c) Count of students who were absent for the test d) Display mark with highest frequency
n=int(input("Enter no. of student's marks you want to enter :"))
lst=[]
print("Enter the marks of the students Give -1 for students who were absent :") 
for i in range(0,n):
     a=int(input("Enter the marks of student: "))
     lst.append(a)
print(lst)

s=0
for i in lst:
    if i!=-1:
        s=s+i
avg=s/len(lst)
print(avg)

high=0
low=1000
for i in lst:
    if i!=-1:
        if i>high:
            high=i
        if i<low:
            low=i
print(high,"   ",low)
cnt=0
for i in lst:
    if(i==-1):
        cnt=cnt+1
print(cnt)

d={}
temp=0
count=0
for i in range(len(lst)):
    if(lst[i]!=-1):
        temp=lst.count(lst[i])
        if(temp>count):
            count=temp
            index=i
print(lst[index])
