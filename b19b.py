def bucket(arr):
    buck=[]
    for i in range(10):
        buck.append([])
    for j in arr:
        ind=int(j*10)
        buck[ind].append(j)
    for i in range(10):
        buck[i]=sorted(buck[i])
    k=0
    for i in range(10):
        for j in range(len(buck[i])):
            arr[k]=buck[i][j]
            k=k+1
    return arr

arr1=[]
n=int(input("no"))
for i in range(n):
    ele=float(input("ele"))
    arr1.append(ele)
print(arr1)
b=[]
for i in range(len(arr1)):
    d=arr1[i]/100
    b.append(d)

h=bucket(b)
u=[]
for i in range(len(arr1)):
    o=h[i]*100
    u.append(o)
print(u)