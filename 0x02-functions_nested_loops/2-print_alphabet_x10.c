#include "main.h"

/**
 * print_alphabet_x10 - print lowercase alphabet 10X
 * Description:print lowercase alphabet 10 X by using putchar
 * Return: void
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	while (i <= 9)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
	}
}
