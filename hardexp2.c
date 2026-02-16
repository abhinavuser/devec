#include<reg51.h>
void delay(unsigned int);
sbit input=P3^2;
sbit led=P1^1;
void main(void)
{
input=1;
led=0;
while(1){
if(input==0)
{
led=0;
delay(100);
led=1;
delay(100);
}
else
led=0;
}
}
void delay(unsigned int n)
{
unsigned int i,j;
for(i=0;i<=n;i++)
for(j=0;j<=1000;j++);
}