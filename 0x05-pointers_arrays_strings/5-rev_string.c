/*header*/
#include <stdio.h>
void rev_string(char *s /**
			 *main entry
			 */)
{
int length = 0;
char *start = s;
char *end = s;
char temp;

while (*s != '\0')
{
length++;
s++;
}
end = s - 1;

while (start < end)
{
temp = *start;
*start = *end;
*end = temp;
start++;
end--;
}
}
