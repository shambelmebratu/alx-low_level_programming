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
	int lastd, n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;
	if (lastd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastd);
	}
	else if (lastdigit < 5 && lastd != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastd);
	}
	return (0);
}

