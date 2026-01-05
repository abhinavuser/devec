#include <stdio.h>
#include <math.h>

int main(){
	float a=0,b=0,c=0;
	printf("enter first side:");
	scanf("%f",&a);
	printf("enter second side:");
	scanf("%f",&b);
	printf("enter third side:");
	scanf("%f",&c);
	float s=0.5*(a+b+c);
	float x=s*(s-a)*(s-b)*(s-c);
	float area=sqrt(x);
	printf("the area is:%f\n",area);
	return 0;
}

