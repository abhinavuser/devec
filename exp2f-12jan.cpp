#include <stdio.h>

int isPrime(int n, int i)
{
    if (n <= 1)
        return 0;
    if (i * i > n)
        return 1;
    if (n % i == 0)
        return 0;
    return isPrime(n, i + 1);
}

int main()
{
    int n;
    printf("Enter the number");
    scanf("%d", &n);
    if (isPrime(n, 2))
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}
