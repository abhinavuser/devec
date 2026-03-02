#include<reg51.h>
void delay(unsigned int);
void main(void)
{
	unsigned char i;
	while(1)
	{
for(i=0;i<5;i++)
		{
			P1=i*10;
			delay(1);
	}
}
	}
void delay(unsigned int n)
{
	unsigned int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<116;j++);
	}
}
		