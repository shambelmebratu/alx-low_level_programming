#include "main.h"

/**
 * _isupper - function to checks if a character is uppercase
 * @c: argument int value
 * Return: 1 if true, 0 if false
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
