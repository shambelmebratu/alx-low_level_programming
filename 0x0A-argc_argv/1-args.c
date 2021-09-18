#include "main.h"
#include <stdio.h>

/**
 * main - main function to print name of the program
 * @argc: number of command line
 * @argv: array of char
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 1)
	{
		printf("%d\n", argc - 1);
	}
	else
		printf("%d\n", 0);

	return (0);
}
