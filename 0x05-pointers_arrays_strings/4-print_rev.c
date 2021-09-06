#include "main.h"

/**
 * print_rev - print string function
 * @s: argument of pointer str value
 * Return: 0
 */

void print_rev(char *s)
{
	int i;
	
	while (s[i])
	{
		i++;
	}
	while (i == 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
