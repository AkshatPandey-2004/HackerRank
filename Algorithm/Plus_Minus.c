#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],i;
    float pos=0,neg=0,zero=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]>0){
            pos+=1;
        }
        else if(arr[i]<0){
            neg+=1;
        }
        else{
            zero+=1;
        }
    }
    float r1,r2,r3;
    r1=pos/n;
    r2=neg/n;
    r3=zero/n;
    printf("%f\n%f\n%f",r1,r2,r3);
}
