def is_leap(year):
    leap = False
    for i in range(0,1):
        end=year%100
    if end%4==0:
        leap = True
        
    if end==00 and year%400==0:
        leap=True
    elif end==00 and year%400!=0:
        leap=False
        
    
    return leap

year = int(input())
print(is_leap(year))
