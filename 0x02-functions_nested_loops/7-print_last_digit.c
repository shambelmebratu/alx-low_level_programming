#include "main.h"
/**
 * print_last_digit - prototype
 * Description:checks if a character is lowercase or not
 * Return: 1 if true. 0 if false.
 * @c: parameter of int value
 */
int print_last_digit(int c)
{
	int lastD = c % 10;

	if (c < 0)
	{
		lastD = lastD * -1;
	}
	_putchar(lastD + '0');
	return (lastD);
}

