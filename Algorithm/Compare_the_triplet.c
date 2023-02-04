#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int a[3];
    int b[3];
    int w=0,l=0;
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    scanf("%d %d %d",&b[0],&b[1],&b[2]);
    int i;
    for(i=0;i<3;i++){
        if(a[i]>b[i]){
            w++;
        }
        else if(a[i]<b[i]){
            l++;
        }
    }
    printf("%d %d",w,l);
}
