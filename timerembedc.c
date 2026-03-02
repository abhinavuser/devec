#include<reg51.h>
sbit x=P1^1;
void delay(void);
void main(void)
{
	TMOD=0x10;
	while(1)
	{
		x=~x;
		delay();
	}
}
void delay(void){
	unsigned int i;
	for(i=0;i<=14;i++){
		TH1=0x00;
		TL1=0x00;
		TR1=1;
		while(TF1==0);
		TR1=0;
		TF1=0;
	}
}