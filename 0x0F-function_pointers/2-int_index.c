/*  v */
#include "function_pointers.h"

int int_index(int *array/**
			 *
			 */, int size, int (*cmp)(int)/**
						    *
						    */)
{
if (size <= 0)
{
return (-1);
}
int i = 0;
while (i < size && (*cmp)(array[i]) == 0)
{
i++;
}
return ((i == size) ? -1 : i);
}
