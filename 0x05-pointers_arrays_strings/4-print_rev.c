#include "main.h"

/**
 * print_rev - print string function
 * @s: argument of pointer str value
 * Return: 0
 */

void print_rev(char *s)
{
	int i;
	int len;
	
	for (i = len; i >=0; i--)
	{
		_putchar(s + i);
	}
	_putchar('\n');
}
