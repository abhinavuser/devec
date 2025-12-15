#include<stdio.h>
#include<math.h>
int main(){
	char a,b,c;
	int x,y,z,v;
	float kv;
	printf("Enter three color codes:");
	scanf("%c%c%c",&a,&b,&c);
	x=a-'A';
	y=b-'A';
	z=c-'A';
	v=((x*10)+y)*pow(10,z);
	kv=v/1000.0;
	printf("value%f",kv);
	return 0;	
}                                                                         
