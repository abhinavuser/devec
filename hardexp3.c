#include<reg51.h>
void delay(unsigned int);
void main(void)
{
P1=0x00;
while(1)
	{
if(P1==0x0F)
{
P1=0x00;
}
else
delay(100);
{
P1++;
delay(100);
}
}
}
void delay(unsigned int n)
{
int i,j;
for(i=0;i<=n;i++)
for(j=0;j<=1000;j++);
}