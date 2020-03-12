//aula 3 exercicio 1
//Joaquim Andrade nº93432

#include<stdio.h>
#include<assert.h>

int main (int argc, char *argv[]){
    assert(argc>1); 
    int a=0;
    for(int j=1;j<argc; j++){
        for(int i=0; i<(argc-1); i++){
            if(argv[j]!=argv[i]){
                a++;
            }
        }
    }
    printf("%d", a);
    return a;
}