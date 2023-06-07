/*a program that prints all single digit numbers*/
#include <stdio.h>

int main(/**
	  *main entry function
	  */)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i % 10 + '0');
}

putchar('\n');

return (0);
}
