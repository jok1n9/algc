//joaquim Andrade
//nº93432
//ex412

#include<stdio.h>
#include<assert.h>

int isValid( int* a, int size){

    assert(size>1);
    int a=1, count=0;
    for (int i = 0; i < size-1; i++)
    {
        count++;
        if ((argc[i] + 1) != argc[i+1])
        {
            a = 0;
            break;
        }
    }
    return a;
}
