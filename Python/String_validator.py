if __name__ == '__main__':
    s = input()
    move=0
    for i in s:
        if(i.isalnum()):
            move+=1
        else:
            move=-100
    if(move>0):
        print("True")
    else:
        print("False")
    move=0
    for i in s:
        if(i.isalpha()):
            move+=1
    if(move>0):
        print("True")
    else:
        print("False")
    move=0
    for i in s:
        if(i.isdigit()):
            move+=1
    if(move>0):
        print("True")
    else:
        print("False")
    move=0
    for i in s:
        if(i.islower()):
            move+=1
    if(move>0):
        print("True")
    else:
        print("False")
    move=0
    for i in s:
        if(i.isupper()):
            move+=1
    if(move>0):
        print("True")
    else:
        print("False")
