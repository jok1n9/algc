//aula 3 exercicio 1
//Joaquim Andrade nº93432

#include<stdio.h>
#include<assert.h>

int main (int *argv, char argc){
    assert(argc>1); 
    int a=0, b=0;
    for(int j=1;j<argc; j++){
        b++;
        if(argv[j]!=argv[j-1]){
                a++;
            }
        }
    
    printf("números diferentes: %d, número de comparações: %d", a, b);
    return a;
}