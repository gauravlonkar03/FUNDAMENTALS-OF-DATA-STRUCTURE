# Write a Python program to compute following operations on String: a) To display word with the longest length b) To determines the frequency of occurrence of particular character in the string c) To check whether given string is palindrome or not d) To display index of first appearance of the substring e) To count the occurrences of each word in a given string

str1=str(input("Enter a string : "))
print(str1)

lst=str1.split( )
print(lst)
temp=0
count=0
for i in range(len(lst)):
    temp=len(lst[i])
    if(temp>count):
        count=temp
        index=i
print(lst[index])

c=input("letter")
cnt=0
for i in str1:
    if c==i:
        cnt=cnt+1
print(cnt)

str2=input("Enter a string")
print(str2)
str3=str2[::-1]
print(str3)
if str2==str3:
    print("yes")
else:
    print("no")
d=input("Enter a substring")
print(str1.find(d))
lst1=[]
for i in range(len(lst)):
    lst1.append(lst.count(lst[i]))
print("Each word is repeated :",lst1)