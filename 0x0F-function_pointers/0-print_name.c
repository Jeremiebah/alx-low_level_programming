/* v */
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the name to print
 * @f: a function pointer to format the name
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
while (*name)
{
f(name);
name++;
}
}
}
