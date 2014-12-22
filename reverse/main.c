#include <stdio.h>
#include <string.h>

#define MAX 100

char *reverse(char *src);

int main()
{
    char src[MAX];

    printf("please enter the string:\n");
    scanf("%s",src);
    
    reverse(src);

    printf("the reverse string is :%s\n",src);

    return 0;
}
