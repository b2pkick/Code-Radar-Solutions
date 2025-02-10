#include <stdio.h>

void isPrime(n){
    int i,count;
    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
}