//joaquim Andrade
//nº93432
//ex41

#include <stdio.h>
#include <assert.h>

int main(void){
    
    int argc[10] = {1, 2, 3, 6, 8, 8, 8, 9, 9, 9};
    int a = 1, ct = 0;
    for (int i = 0; i < 9; i++)
    {
        ct++;
        if ((argc[i] + 1) != argc[i+1])
        {
            a = 0;
            break;
        }
    }
    printf("%d, %d", a, ct);
}