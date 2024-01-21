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
    int n;
    scanf("%d",&n);
    int games[n];
    for(int i=0;i<n;i++){
        scanf("%d",&games[i]);
    }
    int MAX,MIN,mx=0,mi=0;
    MAX=games[0];
    MIN=games[0];
    for(int i=0;i<n;i++){
        if(games[i]>MAX){
            MAX=games[i];
            mx+=1;
        }
        else if(games[i]<MIN){
            MIN=games[i];
            mi+=1;
        }
    }
    printf("%d %d",mx,mi);
}
