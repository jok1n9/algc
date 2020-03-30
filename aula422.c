//joaquim Andrade
//nº93432
//ex422

#include <stdio.h>
#include <assert.h>

void remove_duplicates(int *givenarray, int size)
{
    int countdesl=0, countcomparacoes=0;
    
    for(int i=0; i<(size-1) ; i++){        //percorre o array dado
        for(int j=(i+1); j<size; j++){   
            countcomparacoes++;
            if(givenarray[i]==givenarray[j]){           
                for(int h=j; h<(size-1); h++){
                    givenarray[h]= givenarray[h+1];
                    countdesl++;
                }
                size--;
                j--;
            }
        }
    }
}