#include "one.h"
/**
* simple_shell - function for the implementation
* of the simple shell
* @env: environment variable passed to the simple shell
*
* Return: void
*/
void simple_shell(char **env)
{
	char *cmd = NULL;
	size_t cmd_len = 0;
	ssize_t cmd_char;

	prompt();
	cmd_char = my_getline(&cmd, &cmd_len, stdin);
	if (cmd_char > 0)
	{
		if (cmd[cmd_char - 1] == '\n')
			cmd[cmd_char - 1] = '\0';

		char *vector[MAX_COMMAND];

		parse_command(cmd, vector);
		if (vector[0] == NULL)
		{
			write(STDERR_FILENO, "No such file or directory\n", 27);
			free(cmd);
			return;
		}
		handle_builtin(vector, env);
	} else
	{
		free(cmd);
		exit(EXIT_FAILURE);
	}
	free(cmd);
}
