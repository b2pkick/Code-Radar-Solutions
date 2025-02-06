#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int i;
    int j;
    int k = 65;
    for(i=0;i<a;i++){
        k=65;
        for(j=0;j<i+1;j++){
            printf("%c",k);
            k++;
        }
        printf("\n");
    }
}