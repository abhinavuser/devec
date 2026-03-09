#include <reg51.h>

#define Data P2      /* P2 port as data port */

sbit rs = P3^7;      /* Register select pin */
sbit rw = P3^6;      /* Read/Write pin */
sbit en = P3^5;      /* Enable pin */

/* Function Prototypes */
void delay(unsigned int count);
void LCD_Init(void);
void LCD_Command(unsigned char cmd);
void LCD_Data(unsigned char char_data);
void LCD_Display(unsigned char str[]);

void main()          /* LCD Main program */
{
    LCD_Init();      /* initialization of LCD */
    LCD_Display("I Love VIT");   /* write string on 1st line */
    LCD_Command(0xC0);           /* Force cursor to 2nd line */
    LCD_Display("Hai Students"); /* write string on 2nd line */
    while(1);        /* Infinite loop */
}

/* LCD Initialize function */
void LCD_Init(void)
{
    delay(20);       /* LCD Power ON Initialization time >15ms */
    LCD_Command(0x38); /* Initialization of 16X2 LCD in 8-bit mode */
    LCD_Command(0x01); /* clear display */
    LCD_Command(0x0F); /* Display ON Cursor Blinking */
    LCD_Command(0x06); /* Auto Increment cursor */
    LCD_Command(0x80); /* cursor at home position (1st row, 1st column) */
}

/* LCD16x2 command function */
void LCD_Command(unsigned char cmd)
{
    Data = cmd;
    rs = 0;          /* command mode */
    rw = 0;          /* Write operation */
    en = 1;
    delay(1);
    en = 0;
    delay(5);
}

/* LCD data write function */
void LCD_Data(unsigned char char_data)
{
    Data = char_data;
    rs = 1;          /* Data mode */
    rw = 0;          /* Write operation */
    en = 1;
    delay(1);
    en = 0;
    delay(5);
}

/* Send string to LCD to display */
void LCD_Display(unsigned char str[])
{
    int i;
    for(i=0; str[i]!='\0'; i++) /* Send each char of string */
    {
        LCD_Data(str[i]);       /* Call LCD data write */
    }
}

/* Function to provide delay Approx 1ms */
void delay(unsigned int count)
{
    int i, j;
    for(i=0; i<count; i++)
    {
        for(j=0; j<114; j++);
    }
}
