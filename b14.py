# Write a pythonprogram to store first year percentage of students in array. Write function for sorting array of floating point numbers in ascending order using 
# a) Selection Sort b) Bubble sort and display top five scores
def bub(arr):
    n=len(arr)
    for i in range(n-1):
        for j in range(n-i-1):
            if(arr[j]>arr[j+1]):
                temp=arr[j]
                arr[j]=arr[j+1]
                arr[j+1]=temp
    return arr

def sel(arr):
    n=len(arr)
    for i in range(n-1):
        min=i
        for j in range(i+1,n,1):
            if(arr[j]<arr[min]):
                min=j
        temp=arr[i]
        arr[i]=arr[min]
        arr[min]=temp
    return arr

arr1=[]
a=int(input("Enter the no. of students"))
for i in range(a):
    c=int(input("Enter percent of students :"))
    if(c<=100):
        arr1.append(c)
    else:
        print("Enter correct value ")
        break
b=bub(arr1)
print(b[:3])
c=sel(arr1)
print(c)

