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
		putchar(i);
		if (i != 9)
		{
			putchar(',');
			putchar(" ");
		}
	}
	putchar('\n');

return (0);
}
