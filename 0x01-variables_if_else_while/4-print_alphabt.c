#include <stdio.h>
#include <unistd.h>
/**
 * main - main function
 * Description: print a to z except q and e by using break
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar('\n');

return (0);
}
