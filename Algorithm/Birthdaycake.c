#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=0,count=0;
    for(i=0;i<n;i++){
        if(max<arr[i]){
            count=1;
            max=arr[i];
        }
        else if (max==arr[i]){
            count++;
        }
    }   
    printf("%d",count);
}
