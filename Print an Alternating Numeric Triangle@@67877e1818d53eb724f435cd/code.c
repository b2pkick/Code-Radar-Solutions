#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int i;
    int j;
    int k = 0;
    int u;
    for(i = 0;i<a;i++){
        k = !k;
        u = k;
        for(j=0;j<i+1;j++){
            printf("%d ",u);
            u = !u;
        }
        printf("\n");
    }
    return 0;
}