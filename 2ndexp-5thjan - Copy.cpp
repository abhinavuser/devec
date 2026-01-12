#include <stdio.h>

int factorial(int a){
	int x = 1;
	int i;
	for(i = 1; i <= a; i++){
		x = x * i;
	}
	return x;
}

int main(){
	int a = 0, f = 0;
	printf("Enter the number");
	scanf("%d", &a);
	f = factorial(a);
	printf("The factorial is %d", f);
	return 0;
}