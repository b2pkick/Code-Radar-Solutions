#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int count;
    int arr[100];
    int m;
    scanf("%[^\n]", s);
    int n = strlen(s);
    for(int i=0;i<n;i++){
        count = 0;
        m = s[i];
        for(int j=0;j<n;j++){
            if(s[j]==m){
                count++;
            }
        }
        arr[i] = count;
    }
    int u=0;
    for(int i=0;i<n;i++){
        if(arr[i]>u){
            u = arr[i];
        }
    }
    int k=1000;
    for(int i=0;i<n;i++){
        count = 0;
        m = s[i];
        for(int j=0;j<n;j++){
            if(s[j]==m){
                count++;
            }
        }
        if(count == u){
            if((int)m<k){
                k = m;
            }
        }
    }
    printf("%c",k);
}