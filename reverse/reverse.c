char *reverse(char *src)
{
    int i = 0;
    int len = strlen(src);
    char temp = '\0';
    
    for(i = 0; i < len / 2; i ++)
    {
        temp = *(src + len - 1 - i);
		*(src + len - 1 - i) = *(src + i);
		*(src + i) = temp;
    }

    return src;
}
