#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    int i;
    int j;
    int k;
    for(i=1;i<=a;i++){
        for(k=0;k<3-i;k++){
            printf(" ");
        }
        for(j=0;j<2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<a-1;i++){
        for(k=0;k<i+1;k++){
            printf(" ");
        }
        for(j=0;j<5-2*i;j++){
            printf("*");
        }
        printf("\n")
    }
}