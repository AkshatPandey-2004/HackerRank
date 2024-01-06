#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int i=0;
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    for(i=0;i<n;i++){
        if(arr[i]<38){
            continue;
        }
        if((arr[i]+1)%5==0){
            arr[i]=arr[i]+1;
        }
        if((arr[i]+2)%5==0){
            arr[i]=arr[i]+2;

        }
    }
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}
