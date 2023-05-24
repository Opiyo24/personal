#include "one.h"
/**
* my_getline - custom function that mimics the getline function
* from the standard input
* @lineptr: a pointer of a pointer of the buffer holding the
* input command
* @n: pointer that holds the size of the buffer
* @stream: standard input from where the line is read
*
* Return: number of characters read - ssize_t
*/

ssize_t my_getline(char **lineptr, size_t *n, FILE *stream)
{
	ssize_t bytesRead = 0;
	size_t currentPosition = 0;
	int c, isNewLine = 0;

	if (*lineptr == NULL || *n == 0)
	{
		*n = BUFSIZ;
		*lineptr = malloc(*n);
		if (*lineptr == NULL)
			return (-1);
	}
	while ((c = getc(stream)) != EOF)
	{
		if (currentPosition >= *n - 1)
		{
			*n += BUFSIZ;
			char *newLineptr = realloc(*lineptr, *n);

			if (newLineptr == NULL)
			{
				return (-1);
			}
			*lineptr = newLineptr;
		}
		(*lineptr)[currentPosition++] = c;

		if (c == '\n')
		{
			isNewLine = 1;
			break;
		}
	}
	(*lineptr)[currentPosition] = '\0';
	bytesRead = currentPosition;

	if (bytesRead == 0 && !isNewLine)
		return (-1);

	return (bytesRead);
}
