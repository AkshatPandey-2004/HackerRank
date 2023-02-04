#include <stdio.h>
long aVeryBigSum(long*,int);
int main()
{
    int n;
    long r;
    scanf("%d",&n);
    long a[n];
    for (int i=0;i<n;i++)
        scanf("%ld",&a[i]);
    r = aVeryBigSum(a, n);
    printf("%ld",r);
    return 0;
}
long aVeryBigSum(long* a,int n)
{
    long sum=0;
    for (int i=0;i<n;i++)
        sum = sum+a[i];
    return sum;
}
