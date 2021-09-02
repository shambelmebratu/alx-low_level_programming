#include <stdio.h>

/**
 * main - prime factore
 *
 * Return: 0
 */

int main(void)
{
	long num = 612852475143;
	long d = 2;
	long lp = 0;

	while (num != 1)
	{
		if (num % d == 0)
		{
			num = num / d;
			lp = d;
		}
		d += 1;
	}
	printf("%ld\n", lp);
	return (0);
}
