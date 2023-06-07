/*print letters in reverse*/
#include <stdio.h>

int main(/**
	  *main entry function
	  */)
{
int letter = 122;

while (letter >= 97)
{
putchar(letter);
letter--;
}

putchar('\n');

return (0);
}
