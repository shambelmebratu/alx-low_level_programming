#include "main.h"

/**
 * print_alphabet - print lowercase alphabet
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
		i++;
	}	
}
