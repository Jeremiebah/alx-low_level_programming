/*a program that prints lower and upoper case alphabets*/
#include <stdio.h>

int main(/**
	  *main function
	  */)
{
int i;
for (i = 97; i <= 122; i++)
{
putchar(i);
}
for (i = 65; i <= 90; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
