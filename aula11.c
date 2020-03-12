#include<stdio.h>

unsigned int f1 (unsigned int n){
    unsigned int i, j, r = 0;
    for (i = 1; i <= n; i++)
    for (j = 1; j <= n; j++)
    r += 1;
    return r;
}
int main(void){
    printf("%d", f1(3) );
    
}