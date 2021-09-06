#include "main.h"

/**
 * puts2 - print string function
 * @str: argument of pointer str value
 * Return: 0
 */

void puts2(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		if (len % 2 == 0)
		{
			_putchar(str[len]);
		}
	}
	_putchar('\n');
}
