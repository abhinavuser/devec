#include <stdio.h>

int main() {
    int sum = 0;
    int arr[4];
    printf("Enter elements:\n");
    for(int i = 0; i < 4; i++) {
        scanf("%d", arr + i);
    }
    int *p = arr;
    for(int i = 0; i < 4; i++) {
        sum += *(p + i);
    }
    printf("Sum = %d\n", sum);
    return 0;
}
