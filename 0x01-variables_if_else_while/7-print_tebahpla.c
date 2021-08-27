#include <stdio.h>
#include <unistd.h>
/**
 * main - main function
 * Description: print lowercase from z to a
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'z'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

return (0);
}
