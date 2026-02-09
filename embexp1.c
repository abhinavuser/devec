#include<reg51.h>
void delay(unsigned int);
sbit byte = P1^1;
void main(void){
while(1)
{
byte=~byte;
delay(200);
}
}
void delay(unsigned int n)
{
int i,j;
	for(j=0;j<=n;j++)
for(i=0;i<=1000;i++);
}