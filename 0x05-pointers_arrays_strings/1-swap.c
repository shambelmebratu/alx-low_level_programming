#include "main.h"

/**
 * swap_int - swap a and b
 * @a: argument of pointer a value
 * @b; argument of pointer b value
 * Return: empty
 */
void swap_int(int *a, int *b)
{
	int tempN;
	tempN = *a;
	*a = *b;
	*b = tempN;
}

