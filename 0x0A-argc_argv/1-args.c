#include <stdio.h>
#include "main.h"

/**
 * main - main function to print number of command
 * @argc: Number of command line
 * @argv: array of char
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
			printf("%d\n", i - 1);
	}

	return (0);
}
