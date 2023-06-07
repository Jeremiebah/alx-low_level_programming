/*header*/
#include <stdio.h>

void puts_half(char *str /**
			  *main entry fumction
			  */)
{
int len = 0, i;

while (str[len] != '\0')
{
len++;
}

if (len % 2 == 0)
{
for (i = len / 2; i < len; i++)
{
putchar(str[i]);
}
}
else
{
for (i = (len + 1) / 2; i < len; i++)
{
putchar(str[i]);
}
}
putchar('\n');
}
