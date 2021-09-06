#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random password
 * Return: zero
 */
int main(void)
{
	int sum;
	char ch;

	srand(time(NULL));
	while (sum <= 2645)
	{
		ch = rand() % 128;
		sum += ch;
		putchar(ch);
	}
	putchar(2772 - sum);
	return (0);
}
