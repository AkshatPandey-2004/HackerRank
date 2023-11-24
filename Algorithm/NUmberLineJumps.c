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

void output(int a,int b,int y,int z){
    while(true){
        a+=y;
        b+=z;
        if(a>b){
            printf("NO");
            break;
        }
        else if(a==b){
            printf("YES");
            break;
        }
    }
}

int main(){
    int x1,x2,v1,v2;
    scanf("%d %d",&x1,&v1);
    scanf("%d %d",&x2,&v2);
    if(x2>x1 && v1>v2){
        output(x1,x2,v1,v2);
    }
    else if(x1>x2 && v1<v2){
        output(x2,x1,v2,v1);
    }
    else if(x1==x2){
        printf("YES");
    }
    else{
        printf("NO");
    }
}
