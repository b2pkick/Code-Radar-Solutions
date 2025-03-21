#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = -1;

    for (int i = 0; i < n; i++) {
        if (i > 0 && i < n - 1) { 
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
                count = arr[i];
                break;
            }
        } else if (i == 0) {
            if (arr[i] > arr[i + 1]) {
                count = arr[i];
                break;
            }
        } else if (i == n - 1) {
            if (arr[i] > arr[i - 1]) {
                count = arr[i];
                break;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}t);
}