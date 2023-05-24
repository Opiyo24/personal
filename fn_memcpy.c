#include "one.h"

/**
* my_memcpy - custom function designed to mimic memcpy
* and copy text
* @dest: destination memory where the copied text will
* be placed.
* @src: memory pointer
* @n: number of bytes in the text to be copied
*
* Return: void
*/

void *my_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d = (unsigned char *)dest;
	const unsigned char *s = (const unsigned char *)src;

	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (dest);
}
