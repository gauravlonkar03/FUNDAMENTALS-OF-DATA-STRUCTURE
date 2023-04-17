m=int(input("rows"))
n=int(input("col"))
l=int(input("2->row"))
matrix1=[]
for i in range(m):
    r=[]
    for j in range(n):
        ele=int(input("element"))
        r.append(ele)
    matrix1.append(r)
for i in range(m):
    for j in range(n):
        print(matrix1[i][j],end=" ")
    print()
matrix2=[]
for i in range(m):
    r1=[]
    for j in range(n):
        el=int(input("element"))
        r1.append(el)
    matrix2.append(r1)
for i in range(m):
    for j in range(n):
        print(matrix2[i][j],end=" ")
    print()

for i in range(m):
    for j in range(n):
        print(matrix1[i][j]+matrix2[i][j],end=" ")
    print()
print()
for i in range(m):
    for j in range(n):
        print(matrix1[i][j]-matrix2[i][j],end=" ")
    print()
for i in range(m):
    for j in range(n):
        print(matrix1[j][i],end=" ")
    print()
r=[]
for i in range(m):
        r2=[]
        for j in range(n):
            r2.append(0)
        r.append(r2)
for i in range(m):
    for j in range(n):
        print(r[i][j],end=" ")
    print()
for i in range(m):
    for j in range(n):
        for k in range(l):
            r[i][j]=r[i][j]+matrix1[i][k]*matrix2[k][j]

for i in range(m):
    for j in range(n):
        print(r[i][j],end=" ")
    print()