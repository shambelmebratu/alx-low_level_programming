#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * Description: print 0 to 9 and ,
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 9)
		{
			putchar(i + '0');
			putchar(", ");
		}
		else
			putchar(i);
	}
	putchar('\n');

return (0);
}
