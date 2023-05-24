#include "one.h"

/**
* parse_command - custom function that parses command from the
* standard input.
* @command: command string entered in the standard input
* @vector: command line arguments passed to parse_command
*
* Return: Void
*/

void parse_command(char *command, char **vector)
{
	int i = 0;
	char *token = fn_strtok(command, " ");

	while (token != NULL)
	{
		vector[i++] = token;
		token = fn_strtok(NULL, " ");
	}
	vector[i] = NULL;
}
