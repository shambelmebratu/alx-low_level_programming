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
	int i;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%d", argv[i]);
		}
	}

	return (0);
}
