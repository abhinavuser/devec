#include <stdio.h>
int a;
int factorial(){
    int x = 1;
    int i;
    for (i = 1; i <= a; i++){
        x = x * i;
    }
    return x;
}
int main(){
    int f;
    printf("Enter the number: ");
    scanf("%d", &a);
    f = factorial();
    printf("The factorial is %d", f);
    return 0;
}
