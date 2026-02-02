#include <stdio.h>
int count(int *arr, int n){
    int c = 0;
    int *p = arr;
    for (int i = 0; i < n; i++, p++)
    {
        if (*p == 0)
            c++;
    }
    return c;
}
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("%d", count(arr, n));
    return 0;
}
