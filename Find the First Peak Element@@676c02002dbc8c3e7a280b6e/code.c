#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int count=-1;
    for(int i=0;i<n;i++){
        if(arr[i-1]&&arr[i+1]){
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
                count = arr[i];
                break;
            }
        }else if(arr[i-1]){
            if(arr[i]>arr[i-1]){
                count = arr[i];
                break;
            }
        }else if(arr[i+1]){
            if(arr[i]>arr[i+1]){
                count = arr[i];
                break;
            }
        }
        }
    printf("%d",count);
}