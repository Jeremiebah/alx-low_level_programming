/* header*/
#include <stdio.h>
#include <string.h>

char *_strncpy(char *dest, const char *src, int n /**
						   *main entry
						   */)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
