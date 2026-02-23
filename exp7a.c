#include <reg51.h>
void delay(unsigned int n);
void main(void)
{
 P1 = 0x00;   
 while(1)
    {
     delay(1);   
     P1++;       
    }
}

void delay(unsigned int n)
{
    unsigned int i, j;
    for(i = 0; i < 120; i++)
    {
     for(j = 0; j < n; j++);
    }
}