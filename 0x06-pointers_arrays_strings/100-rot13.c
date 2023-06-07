/* */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *rot13(char *str/**
		      *
		      */)
{
int i, j;
char *encoded = malloc(strlen(str) + 1);

for (i = 0, j = 0; str[i] != '\0'; i++, j++)
{
char c = str[i];
if (c >= 'a' && c <= 'z')
{
c = (c - 'a' + 13) % 26 + 'a';
}
else if (c >= 'A' && c <= 'Z')
{
c = (c - 'A' + 13) % 26 + 'A';
}
encoded[j] = c;
}
encoded[j] = '\0';

return (encoded);
}
