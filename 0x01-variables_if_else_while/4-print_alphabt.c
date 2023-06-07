/*print all letters except q and e*/
#include <stdio.h>

int main(/**
	  *main entry function
	  */)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
}

putchar('\n');

return (0);
}
