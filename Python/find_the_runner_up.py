if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    j=-100000000000000000000000000
    arr=list(arr)
    for i in arr:
        if(i==max(arr)):
            continue
        elif(i>j):
            j=i
    print(j)
