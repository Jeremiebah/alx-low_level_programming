/* v */
#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Prints a name
 * @name: Pointer to the name string
 * @f: Pointer to a function that takes a char pointer
 *argument and returns void
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
