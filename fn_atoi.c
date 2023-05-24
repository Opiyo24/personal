#include "one.h"

/**
 * fn_atoi - custom function that mimics the builtin
 * function atoi()
 * @str: the string arguments to be passed to the
 * function. The function converts them to integers
 *
 * Return: Converted integer.
*/

int fn_atoi(const char *str)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	if (str[0] == '-')
	{
		sign = -1;
		i++;
	} else if (str[0] == '+')
	{
		i++;
	}

	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + (str[i] - '0');
			i++;
		} else
		{
			break;
		}
	}

	return (sign * result);
}
