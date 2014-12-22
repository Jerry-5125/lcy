#include <string.h>

#define EQUALL 0
#define NO_EQUALL 1

int check(char *string,char *aim)
{
    while(*aim != '\0')
    {
        if(*string != *aim)
	{
	    return NO_EQUALL;
	}
	string ++;
	aim ++;
    }

    return EQUALL;
}
