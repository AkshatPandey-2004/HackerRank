#include<stdio.h>
#include<stdlib.h>
#include <limits.h>
int main(){
    int i,n=5;
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //Algorithm
    long gmax=LONG_MIN;
    long gmin=LONG_MAX;
    long max;
    for(i=0;i<n;i++){
        max=0;
        for(int j=0;j<n;j++){
            if(j==i){
                continue;
            }
            else{
                max+=arr[j];   
            }
        }
        if(max>gmax){
            gmax=max;
        }
        if(max<gmin){
            gmin=max;
        }
    }
    printf("%lu %lu",gmin,gmax);   
}
