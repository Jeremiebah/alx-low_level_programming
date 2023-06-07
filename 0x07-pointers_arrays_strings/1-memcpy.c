/* */
#include <stdio.h>
#include <stddef.h>

void *_memcpy(void *dest, const void *src, size_t n /**
						     *
						     */)
{
unsigned char *pdest = dest;
const unsigned char *psrc = src;
while (n-- > 0)
{
*pdest++ = *psrc++;
}
return (dest);
}
