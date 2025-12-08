#include <stdio.h>
int main() {
    int n1, n2, n3;
    float av;
    printf("Enter n1: ");
    scanf("%d", &n1);
    printf("Enter n2: ");
    scanf("%d", &n2);
    printf("Enter n3: ");
    scanf("%d", &n3);
    av = (n1 + n2 + n3) / 3.0;  
    printf("Average = %.2f\n", av);
    return 0;
}
