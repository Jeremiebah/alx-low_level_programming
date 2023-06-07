/* */
#include <stdio.h>

int sqrt_helper(int n, int start, int end /**
					   *
					   */);

int _sqrt_recursion(int n/**
			  *
			  */)
{
if (n < 0)
{
return (-1);
}
else
{
return (sqrt_helper(n, 0, n));
}
}

int sqrt_helper(int n, int start, int end/**
					  *
					  */)
{
if (start > end)
{
return (-1);
}
int mid = (start + end) / 2;
if (mid * mid == n)
{
return (mid);
}
else if (mid * mid < n)
{
return (sqrt_helper(n, mid + 1, end));
}
else
{
return (sqrt_helper(n, start, mid - 1));
}
}
