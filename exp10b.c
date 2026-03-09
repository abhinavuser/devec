#include<reg51.h>
sbit wave=P1^1;
void timer0_isr(void) interrupt 1
{
	TH0=0x00;
	TL0=0x00;
	wave=~wave;
}
void main()
{
	TMOD=0x01;
	TH0=0x00;
	TL0=0x00;
	ET0=1;
	EA=1;
	TR0=1;
	while(1);
}