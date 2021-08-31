#include "main.h"
/**
 * times_table - prototype
 * Description:checks if a character is lowercase or not
 * Return: 1 if true. 0 if false.
 * @n: parameter of int value
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(i * j);
		}
		_putchar(',');
		_putchar('\n');
	}
}
