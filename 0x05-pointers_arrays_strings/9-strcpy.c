#include "main.h"

/**
 * *_strcpy -  copy the string
 * @dest: char of destination
 * @src: char of source
 * Return: Pointer to `dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
