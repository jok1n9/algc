//joaquim Andrade
//nº93432
//ex32

#include<stdio.h>
#include<assert.h>

int main(void){
    int argc[10]={1,2,3,4,5,6,7,8,9,9};
    int a=0, id=-1, d=0;
    for(int i=1; i<10; i++){
        int c=0;
        for(int j=i-1; j>=0; j--){
            d++;
            if(argc[j]<argc[i]){
                
                c++;
            }
            if (c>a){
                a=c;
                id=i;
            } 
        }
        }
    printf("%d, %d", id, d);




}