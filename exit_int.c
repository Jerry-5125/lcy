#include"reg52.h"
#include"exit_int.h"

void	Exit_int(void)
{
	EA=1;
	EX0=1;
	IT0=0;
}
void	Service_int(void)	interrupt 0;
{
	EXO=0;
	KEY();
	EX0=1;
}