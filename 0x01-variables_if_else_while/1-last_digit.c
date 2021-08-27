#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function
 * Description: print positive and negative value by using if statement
 * Return: 0
 */
int main(void)
{
	int lastdigit, n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	if (n<0)
	{
		lastdigit=-lastdigit;
	}
	if (lastdigit > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, lastdigit);
	}
	else if (lastdigit == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, lastdigit);
	}
	else if (lastdigit < 5 && lastdigit != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
	}
	return (0);
}

