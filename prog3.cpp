#include <stdio.h>

int main() {
    int arr[5];
    int i, max;
    printf("Enter 5 numbers: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("The highest number is %d\n", max);
    return 0;
}
