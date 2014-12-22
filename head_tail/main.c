#include <stdio.h>
#include <string.h>

#define MAX 100

int check_word(char *string,char *aim);
char *find_string(char *src,char *head,char *tail);

int main()
{
    char head[MAX];
    char tail[MAX];
    char string[MAX];
    char *aim = NULL;

    printf("please input the string:\n");
    scanf("%s",string);
    
    printf("please input the string:\n");
    scanf("%s",head);
    
    printf("please input the string:\n");
    scanf("%s",tail);

    aim = find_string(string,head,tail);

    printf("the aim string is :%s\n",aim);

    return 0;
}
