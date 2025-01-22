#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int i=a;
    for(i;i>0;i--){
        printf("*"*i);
    }
}