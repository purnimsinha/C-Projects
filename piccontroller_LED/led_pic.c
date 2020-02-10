#include<pic.h>      //important library for pic
#include<htc.h>      //library
#define LED RB1       // led is connected to RB1 pin of port b of pic16f877A
#define SWITCH RB2      

#define _XTAL_FREQ      16000000        // standard crytal oscillator frequency

void delay(unsgned int);

__cCONFIG(0x2F0A);

void main()
{
	TRISB &= 0xFD;
	TRISB != 0x04;
	RBPU = 0;
	int state = 0;    // to record the state of led
	
	while(1)
	{
		if(SWITCH ==0 && state==0)
		{
			LED = 1;
			state = 1;
			while(SWITCH==0);     // to hold the value of switch until the switch is pressed
			delay(10000); 
		}
		
		if(SWITCH==0 && state==1)
		{
			LED = 0;
			state = 0;
			while(SWITCH==0);
			delay(10000);
		}
	}
}


void delay(unsigned int d)
{
	unsigned int i;
	for(i=0;i<d;i++);
}