#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int count;
    int count1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        count =0;
        count1=0;
        for(int j=0;j<n;j++){
            if(arr[i] ==arr[j]){
                count1++;
            }
        }
        for(int j=0;j<n;j++){
            if(arr[i]>=arr[j]){
                count++;
            }
        }
        if(count-count1==n-count1){
            printf("%d ",arr[i]);
        }
        if(count-count1==n-count1){
            printf("%d",arr[i]);
        }
    }
}