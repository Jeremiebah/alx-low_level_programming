/* */
#include <stdio.h>
#include <stdlib.h>

int main(int argc __attribute__((unused/**
				    *
				    */)), char *argv[]/**
						       *
						       */)
{
	if (argc != 3)
	{
		printf("error\n");
		return (1);
}

int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
int result = num1 * num2;
printf("%d\n", result);
return (0);
}