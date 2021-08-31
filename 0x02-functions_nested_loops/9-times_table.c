#include "main.h"
/**
 * times_table - prototype
 * Description: times table
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			_putchar(k + '0');
		}
		_putchar(',');
		_putchar('\n');
	}
}
