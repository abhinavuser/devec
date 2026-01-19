#include <stdio.h>

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a;
	int b;
	printf("Enter a value:");
    scanf("%d", &a);
    printf("Enter b value:");
    scanf("%d", &b);
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
