#include <stdio.h>
void isPrime(n){
    if(n<0){
        return 0;
    }
    int i,count=0;
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
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int num;
        scanf("%d",&num);
        printf("%d\n",isPrime(num));
    }
}