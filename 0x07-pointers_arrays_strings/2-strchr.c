#include "main.h"

/**
 * _strchr - locate a char. in a string
 * @s: the string
 * @c: the chx.
 * Return: return if c found or not
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
