#include "main.h"

/**
 * rev_string - print string function
 * @s: argument of pointer str value
 * Return: 0
 */

void rev_string(char *s)
{
	int i = 0, len;
	char *begin, *end, t;

	for (i = 0; i < s[i] - 1; i++)
	{
		end++;
	}
	for (i = 0; i < s[i]/2; i++)
	{
		t = *end;
		*end = *begin;
		*begin = t;

		begin++;
		end--;
	}
	_putchar(s[i]);
}
