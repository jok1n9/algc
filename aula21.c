#include<stdio.h>
#include<assert.h>
typedef unsigned long long u64;
    u64 P_2(int n){
        assert(n>=0);
        u64 a,b,c;
            if(n<=1){
                printf("%lls", n);
                return n;
                
             }else{
                a=0;
                b=1;
                for(int i=0; i<n ; i++){
                    c= 3*b+2*a;
                    a=b;
                    b=c;
                }
                printf("%lls",c);
                return c;
        }
    }
    
    
