#include "one.h"

/**
 * fn_exit - custom function that handles the exit
 * call.
 * @args: string argument passed as exit
 *
 * Return: Void
*/

void fn_exit(char **args)
{
	if (args[1] != NULL)
	{
		int status = fn_atoi(args[1]);

		exit(status);
	} else
	{
		exit(EXIT_SUCCESS);
	}
}
