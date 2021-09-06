#include "main.h"

/**
 * rev_string - print string function
 * @s: argument of pointer str value
 * Return: 0
 */

void rev_string(char *s)
{
	int i;
	int j;

	for (i = 0; j < s[i] - 1; i++, j--)
	{
		s[1][i] = s[0][j];
	}
	_putchar(s[1]);
}
