#include<reg52.h>
 void delay_ms(unsigned int t) //12C5A60S2 1T @12MHz  1ms	 OK
{
  uchar i;
  uint x;
  x=t*8;
	while(x--)
	{
	  for(i=0;i<113;i++);
	}
}		
