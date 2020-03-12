//joaquim Andrade
//nº93432
//ex32

#include<stdio.h>
#include<assert.h>

int main(int *argv, int argc){
    assert(argc>1);
    int a=0, id=-1;
    for(int i=argc; i>=0; i--){
        int c=0;
        for(int j=i-1; j>=0; j--){
            if(argv[i]<argv[j]){
                c++;
            }
            if (c>a){
                if(a>=(i-1)){
                    id=i;
                    break;
                }else{
                    a=c;
                    id=i;
                }
            } 
        }
        }
}