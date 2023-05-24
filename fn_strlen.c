#include "one.h"

/**
* my_strlen - function that mimics the strlen
* function
* @str: string whose length is to be determined
*
* Return: size of string
*/

size_t my_strlen(const char *str)
{
	const char *ptr = str;

	while (*ptr != '\0')
	{
		ptr++;
	}
	return ((size_t)(ptr - str));
}
