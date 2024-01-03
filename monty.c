#include "monty.h"

/**
 * main - main entry point to the monty
 * @argc: the number of command line arguments
 * @argv: the command line arguments
 * Return: the exit status of the program
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	stack_t *stack = NULL;
	FILE *file = open_file(argv[1]);

	execute_instructions(file, &stack);

	fclose(file);
	free_stack(&stack);

	return (EXIT_SUCCESS);
}
