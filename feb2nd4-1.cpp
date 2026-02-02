#include <stdio.h>
int primez(int n){
    if (n < 2)
        return 0;
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int main(){
    int arr[10];
    int *p = arr;
    printf("Enter the elements :");
    for (int i = 0; i < 10; i++)
        scanf("%d", p + i);
    for (int i = 0; i < 10; i++){
        if (primez(*(p + i)))
            *(p + i) = 0;
    }
    for (int i = 0; i < 10; i++)
        printf("%d ", *(p + i));
    return 0;
}
