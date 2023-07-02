def merge_the_tools(string, k):
    start=0
    stop=k
    for i in range((len(string)//k)):
        abc=list(string[start:stop])
 
        abc=set(abc)
        abc=list(abc)
        for i in abc:
            print(i,end="")
        print("")
        start+=k
        stop+=k

if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)
