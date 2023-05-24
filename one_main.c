#include "one.h"

/**
* main - entry point. Implementation of
* the simple shell
*
* Return: 0 on success
*/

int main(void)
{
	char *env[] = {NULL};

	while (1)
	{
		simple_shell(env);
	}

	return (0);
}
