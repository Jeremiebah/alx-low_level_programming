/*heading*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *leet(char *str /**
*
*/)
{
char *result = str;
char *leet_chars = "aAeEoOtTlL";
char *leet_subs = "433771";
for (; *str; str++)
{
int i;
for (i = 0; leet_chars[i]; i++)
{
if (*str == leet_chars[i])
{
*result++ = leet_subs[i / 2];
break;
}
}
if (!leet_chars[i])
{
*result++ = *str;
}
}
*result = '\0';
return (str);
}
