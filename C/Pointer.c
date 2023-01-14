#include <stdio.h>
#include<math.h>

void update(int *a,int *b) {
    // Complete this function
    int abc,diff;
    abc= *a + *b;
    diff= *a-*b;
    if(diff<0){
        diff=diff*-1;
    }
    printf("%d",abc);
    printf("\n%d",diff);
      
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    return 0;
}
