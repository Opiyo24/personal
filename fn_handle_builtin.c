#include "one.h"

/**
* handle_builtin - custom function to handle builtin functions
* for simple shell representation.
* @vector: command line arguments passed to handle_builtin
* @env: environment variable passed to handle_builtin
*
* Return: Void
*/

void handle_builtin(char **vector, char **env)
{
	if (strcmp(vector[0], "exit") == 0)
	{
		fn_exit(vector);
	} else if (strcmp(vector[0], "env") == 0)
	{
		handle_env();
	} else
	{
		char *command_path = get_command_path(vector[0]);

		if (command_path != NULL)
		{
			execute_command(command_path, vector, env);
			free(command_path);
		} else
		{
			write(STDERR_FILENO, "No such file or directory\n", 27);
		}
	}
}
