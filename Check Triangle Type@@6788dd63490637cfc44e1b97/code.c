#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",a,b,c);
    if(a == b && b==c){
        printf("equilateral");
    }else if(a==b&&b!=c){
        printf("isosceles");
    }else if(a==c&&b!=c){
        printf("iscosceles");
    }else if(b==c&&b!=a){
        printf("iscosceles");
    }else{
        printf("scalene");
    }
}