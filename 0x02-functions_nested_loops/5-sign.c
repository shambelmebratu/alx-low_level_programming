#include "main.h"
/**
 * print_sign - prototype
 * Description:checks if a character is lowercase or not
 * Return: 1 if true. 0 if false.
 * @n: parameter of int value
 */
int prin_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
