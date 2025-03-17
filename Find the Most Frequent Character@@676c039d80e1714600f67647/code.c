#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int count;
    int arr[100];
    scanf("%s",&s);
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
    int q = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<q;i++){
        if(arr[i]>u){
            u = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        count = 0;
        int m = s[i];
        for(int j=0;j<n;j++){
            if(s[j]==m){
                count++;
            }
        }
        if(count == u){
            printf("%c",s[i]);
            break;
        }
    }
}