#include <stdio.h>
#include <string.h>

char *find_string(char *string,char *head,char *tail)
{
    int result = 0;
    char *temp = NULL;

    while(*string != '\0')
    {
        result = check(string,head);
	
	if(result == 0)
	{
	    temp = string;
	    string = string + strlen(head);
	    break;
	}
	string ++;
    }

    while(*string != '\0')
    {
        result = check(string,tail);
        if(result == 0)
	{
	    *(string + strlen(tail)) = '\0';
	}
	string ++;
    }

    return temp;
}
