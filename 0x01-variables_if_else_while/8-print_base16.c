#include <stdio.h>
#include <unistd.h>
/**
 * main - main function
 * Description: print positive and negative value by using if statement
 * Return: 0
 */
int main(void)
{
	char a;
	char b = '0'

	for (b = 0; b <= 9; b++)
	{
		putchar(b);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');

return (0);
}
