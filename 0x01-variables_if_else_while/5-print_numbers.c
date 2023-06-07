/*Write a program that prints all single digit numbers of base 10*/
#include <stdio.h>

int main(/**
	  *main entry function
	  */)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
}

putchar('\n');

return (0);
}
