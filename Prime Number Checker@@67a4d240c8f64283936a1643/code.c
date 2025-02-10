#include <stdio.h>

int isPrime(n){
    if(n<0){
        return 0;
    }
    int i,count;
    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        return 1;
    }else{
        return 0;
    }
}