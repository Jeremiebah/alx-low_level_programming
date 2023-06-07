/*header*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *cap_string(char *str/**
			   *main entry
			   */)
{
char *ptr = str;
int cap_next = 1;

while (*ptr != '\0')
{
if (cap_next && isalpha(*ptr))
{
*ptr = toupper(*ptr);
cap_next = 0;
}
else if (isspace(*ptr) || ispunct(*ptr))
{
cap_next = 1;
}
ptr++;
}

return (str);
}
