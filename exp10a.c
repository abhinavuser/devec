#include<reg51.h>
void link(void)interrupt 0
{
	P1=~P1;
}
void main(void)
{
	IE=0x81;
	while(1);
}