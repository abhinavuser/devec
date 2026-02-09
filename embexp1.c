#include<reg51.h>
void delay(unsigned int);
sbit byte = P1^1;
void main(void){
while(1)
{
byte=~byte;
delay(306);
}
}
void delay(unsigned int n)
{
int j;
for(j=0;j<=n;j++);

}
