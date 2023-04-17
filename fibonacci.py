#[0,1,1,2,3,5,8,13....]
#returs the fibonacci number at index n
def fibogen(n):
    if n<1:
        return 0
    elif n==1:
        return 1
    
    else:
        return fibogen(n-1) + fibogen(n-2)

def fibosearch(arr,x):
    m=0
    while fibogen(m)<len(arr):
        m=m+1
    #m is index of fi array and fibogen is value at m
    offset=-1
    while(fibogen(m)>1):
        i=min(offset +fibogen(m-2),len(arr)-1)
        if(x>arr[i][0]):
            n=m-1
            offset=i
        elif(x<arr[i][0]):
            m=m-2
        else:
            return arr[i]
    if(fibogen(m-1) and arr[offset + 1]==x):
        return offset +1

arr=[["a",45],["b",65],["c",80],["d",90]]
x="d"
print(fibosearch(arr,x))
    

