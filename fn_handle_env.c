#include "one.h"

/**
* handle_env - function that handles the inbuilt function
* call env
*
* Return: Void
*/

void handle_env(void)
{
	extern char **environ;

	char **env = environ;

	while (*env != NULL)
	{
		size_t len = strlen(*env);

		write(STDOUT_FILENO, *env, len);
		write(STDOUT_FILENO, "\n", 1);
		env++;
	}
}
