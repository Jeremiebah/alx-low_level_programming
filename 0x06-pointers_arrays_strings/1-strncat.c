/* header*/
#include <stdio.h>
#include <string.h>

char *_strncat(char *dest, const char *src, int n /**
						   *main function
						   */)
{
int dest_len = strlen(dest);
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}
dest[dest_len + i] = '\0';
return (dest);
}
