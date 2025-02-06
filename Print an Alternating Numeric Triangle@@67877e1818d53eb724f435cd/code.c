#include <stdio.h>


int main() {
    int a;
    scanf("%d",&a);
    int i;
    int j;
    int k = false;
    for(i = 0;i<a;i++){
        k = !k;
        for(j=0;j<a;j++){
            printf("%d",k);
            k = !k;
        }
        printf("\n");
    }
}