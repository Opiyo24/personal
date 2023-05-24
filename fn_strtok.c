#include "one.h"

/**
* fn_strtok - custom function that mimics the inbuilt strtok
* to tokenize strings fron stdin
* @str: the string to tokenize
* @delim: delimiter
*
* Return: char - token
*/

char *fn_strtok(char *str, const char *delim)
{
	static char *buffer;
	static int index;

	if (str != NULL)
	{
		buffer = str;
		index = 0;
	}
	if (buffer == NULL || buffer[index] == '\0')
		return (NULL);
	char *token = buffer + index;

	while (buffer[index] != '\0')
	{
		if (strchr(delim, buffer[index]) != NULL)
		{
			buffer[index] = '\0';
			index++;
			return (token);
		}
		index++;
	}
	return (token);
}
