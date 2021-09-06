#include "main.h"

/**
 * -puts - print string function
 * @str: argument of pointer str value
 * Return: empty
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
