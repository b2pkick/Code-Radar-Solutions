#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int i;
    int j;
    for(i=0;i<a;i++){
        for(j=1;j<i+2;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}