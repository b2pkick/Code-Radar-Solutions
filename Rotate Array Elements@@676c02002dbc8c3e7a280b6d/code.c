#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    int temp;
    int arr1[n];
    for(int i=0;i<n;i++){
        arr1[i] = arr[i];
    }
    scanf("%d",&k);
    for(int i=1;i<n;i++){
        if(i+k>n-1){
            arr[i] = arr1[i-k-1];
        }else{
            arr[i] = arr1[i+k];
        }
    }
    for(int i= 0 ;i<n;i++){
        printf("%d\n",arr[i]);
    }
}