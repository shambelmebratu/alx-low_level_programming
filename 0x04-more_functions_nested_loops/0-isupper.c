#include "main.h"

/**
 * _isupper - prototype
 * Description: checks if a character is uppercase or not
 * Return: 1 if true. 0 if false.
 * @c: parameter of int value
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
