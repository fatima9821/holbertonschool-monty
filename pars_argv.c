#include "monty.h"
/**
 * parse_arg - Parses the argument to ensure it's a valid integer.
 * @arg: The argument string to parse.
 * @line_number: The line number for error reporting.
 *
 * Return: The parsed integer.
 */
int parse_arg(char *arg, unsigned int line_number)
{
	char *ptr;
	int n = (int)strtol(arg, &ptr, 10);

	if (ptr == arg || *ptr != '\0')
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	return (n);
}
