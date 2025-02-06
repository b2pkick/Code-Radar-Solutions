#include <stdio.h>
#include <math.h>
int main() {
    int a;
    scanf("%d",&a);
    int i;
    int j;
    int k;
    int u;
    for(i=1;i<=a;i++){
        for(k=0;k<a-i;k++){
            printf(" ");
        }
        for(j=1;j<i+1;j++){
            printf("%f",tgammaf(j+1));
        }
        for(u=1;i<i;i++){
            printf("%f",tgammaf(u+1));
        }
        printf("\n");
    }
}