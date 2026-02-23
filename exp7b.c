#include <reg51.h>

void delay(unsigned int n);

void main(void)
{
    unsigned char up = 1;
    P1 = 0x00;
    while(1)
    {
        delay(1);
        if(up)
        {
            P1++;
            if(P1 == 0xFF)
                up = 0;
        }
        else
        {
            P1--;
            if(P1 == 0x00)
                up = 1;
        }
    }
}
void delay(unsigned int n)
{
    unsigned int i, j;
    for(i = 0; i < 60; i++)
    {
        for(j = 0; j < n; j++);
    }
}
