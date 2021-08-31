#include "main.h"

/**
 * print_alphabet - print lowercase alphabet
 * Description:print lowercase alphabet by using putchar,
 * Return: void 
 */
void print_alphabet(void)
{
	char letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
