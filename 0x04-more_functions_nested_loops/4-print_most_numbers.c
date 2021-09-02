#include "main.h"

/**
 * print_numbers - print  0 - 9
 *
 * Return: void
 */

void print_numbers(void)
{
	char a = 0;
	for (int i = 0; i < 10; i++)
	{
		while (a <= 14)
		{
			_putchar(a + '0');
			a++;
		}
		_putchar('\n');
	}
}
