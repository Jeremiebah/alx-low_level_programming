/*a program that prints all possible combinations of two two-digit numbers*/
#include <stdio.h>

int main(void/**
	      *main entry function
	      */)
{
int i, j;
for (i = 0; i < 100; i++)
{
for (j = i; j < 100; j++)
{
if (i != j)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
putchar(' ');
putchar((j / 10) + '0');
putchar((j % 10) + '0');
if (i < 98 || j < 98)
{
putchar(',');
putchar(' ');
}
}
}
}
{
putchar('\n');
}
return (0);
}
