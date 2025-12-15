#include<stdio.h>
int main(){
	float u,c;
	printf("Enter the no of units:");
	scanf("%f",&u);
	
	if(u>200){
		c=200+((u-200)*1.5);
		if(u>300){
			c=350+((u-300)*2);
		}
		printf("cost:%f",c);
	}
	else{
		c=u;
		printf("cost:%f",c);
	}                                             
}
