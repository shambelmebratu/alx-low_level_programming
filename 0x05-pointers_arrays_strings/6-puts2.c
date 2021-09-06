#include "main.h"

/**
 * puts2 - print string function
 * @str: argument of pointer str value
 * Return: 0
 */

void puts2(char *str)
{
	int len, i = 0;

	for (len = 0; str[len] != '\0'; len+=2)
	{
		_putchar(str[len]);
	}
}
