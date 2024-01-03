#include "monty.h"
/**
 * open_file - Opens a file for reading and handles errors.
 *
 * @filename: Name of the file to be opened.
 *
 * Return: A pointer to the opened file.
 */
FILE *open_file(char *filename)
{
	FILE *file = fopen(filename, "r");

	if (file == NULL)
	{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	return (file);
}
