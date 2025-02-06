#include <stdio.h>

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
            printf("%d",j);
        }
        for(u=i;u>0;u--){
            printf("%d",u);
        }
        printf("\n");
    }
}