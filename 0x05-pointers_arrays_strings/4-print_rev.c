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
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
