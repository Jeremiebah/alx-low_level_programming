/*header*/
#include <stdio.h>
#include <string.h>

char *string_toupper(char *str/**
			       *main entry
			       */)
{
char *ptr = str;

while (*ptr != '\0')
{
if (*ptr >= 'a' && *ptr <= 'z')
{
*ptr -= 32;
}
ptr++;
}

return (str);
}
