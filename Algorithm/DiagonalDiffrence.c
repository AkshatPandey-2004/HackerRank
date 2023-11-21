#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int l=0,r=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                l+=arr[i][j];     
            }
            if(i+j==n-1){
                r+=arr[i][j];
            }
            
        }
    }
    printf("%d",abs(l-r));
    
}
