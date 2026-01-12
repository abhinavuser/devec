#include <stdio.h>
void factorial(int a) {
    int x = 1;
    for (int i = 1; i <= a; i++) {
        x = x * i;
    }
    printf("The factorial is %d", x);
}

int main() {
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);
    factorial(a);
    return 0;
}


