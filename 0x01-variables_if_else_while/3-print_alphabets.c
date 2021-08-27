#include <stdio.h>
#include <unistd.h>
/**
 * main - main function
 * Description: print print lower case and upercase by using for loop
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
        {
                putchar(ch);
        }
	putchar('\n');

return (0);
}
