#include "main.h"

/**
 * _strncat - Concatenates two string by using n bytes.
 * @dest: dest argument.
 * @src: src
 * @n: number of byte append form src to dest
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
