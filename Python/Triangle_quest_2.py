for i in range(1,int(input())+1):
    print(((10**i-1)//9)**2)
"""
OTHER SOLUTION
n=int(input())
for k in range(1,n+1):
    for i in range(1,k+1):
        print(i,end="")
    for j in range(k-1,0,-1):
        print(j,end="")
    print("\n",end="")
    """"
