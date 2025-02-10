#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int i;
    int j;
    int k;
    for(i=0;i<a;i++){
        for(k=0;k<a-i-1;k++){
            printf(" ");
        }
        for(j=0;j<2i+1;j++){
            printf("* ");
        }
        printf("\n")
    }
}