#include <REG51.H>

void main() {
    unsigned char ascii1=0x04, ascii2=0x07,bcd;
		bcd=ascii1<<4;
		P1=ascii2|bcd;
}
