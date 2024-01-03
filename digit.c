#include "monty.h"
/**
 * _isdigit - Checks if a string represents a valid (possibly signed) integer.
 * @str: The string to check.
 *
 * string to ensure it's a digit.
 *
 * Return: 1 if the string represents a valid integer, 0 otherwise.
 */
int _isdigit(char *str)
{
	int i = 0;

	if (str[i] == '-' || str[i] == '+')
		i++;
	for (; str[i]; i++)
	{
		if (isdigit(str[i]) == 0)
			return (0);
	}
	return (1);
}
