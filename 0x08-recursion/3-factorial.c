/* */
#include <stdio.h>

int factorial(int n /**
		     *
		     */)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1)); /*Multiply n by factorial of (n-1)*/
}
}
