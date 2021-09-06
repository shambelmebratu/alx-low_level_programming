#include "main.h"

/**
 * rev_string - print string function
 * @s: argument of pointer str value
 * Return: 0
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
