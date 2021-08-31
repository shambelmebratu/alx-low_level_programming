#include "main.h"
/**
 * _islower - prototype
 * Description:checks if a character is lowercase or not
 * Return: 1 if true. 0 if false.
 */
int _islower(int c)
{
	int i = 'a';
	for (i = 'a'; i <= 'z'; i++)
	{
		/* check if c is lowercase letter*/
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
