#include "one.h"

/**
* prompt - function that initializes the prompt
*loop for the simple shell implementation
*
* Return: Void
*/

void prompt(void)
{
	if (isatty(STDIN_FILENO))
	{
		write(STDOUT_FILENO, "Cisfun$ ", 9);
		fflush(stdout);
	}
}
