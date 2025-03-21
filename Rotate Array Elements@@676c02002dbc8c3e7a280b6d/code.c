#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    int k;
    int temp;
    scnaf("%d",&k);
    for(int i=0;i<k;i++){
        for(int j=0;j<n;j++){
            temp = arr[i];
            if(i+k>n){
                arr[n-k-1]=arr[i];
            }else{
            arr[i] = arr[i+k];
            arr[i+k] = arr[i];
            }
        }
    }
    for(int i= 0 ;i<n;i++){
        printf("%d",arr[i]);
    }
}