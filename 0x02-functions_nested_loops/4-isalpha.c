#include "main.h"
/**
 * _isalpha - prototype
 * Description:checks if it is alphabet or not
 * Return: 1 if true. 0 if false.
 * @c: parameter of int value
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else
	{
		return (0);
	}
}

