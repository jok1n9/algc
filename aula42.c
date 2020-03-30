//joaquim Andrade
//nº93432
//ex42

#include<stdio.h>
#include<assert.h>

int main(void){
    int a, size, count=0, countcomparacoes=0;
    int givenarray[9]={1,2,3,4,5,6,7,8,9};
    size=9;
    for(int i=0; i<(size-1) ; i++){        //percorre o array dado
        for(int j=(i+1); j<size; j++){   
            countcomparacoes++;
            if(givenarray[i]==givenarray[j]){           
                for(int h=j; h<(size-1); h++){
                    givenarray[h]= givenarray[h+1];
                    count++;
                }
                size--;
                j--;
            }
        }
    }
    for(int d=0; d<size; d++){
        printf("%d",givenarray[d]);
    }
    printf("\n%d, %d, %d", size, count, countcomparacoes);
}
