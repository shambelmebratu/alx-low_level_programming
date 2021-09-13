/**
 * _memset - fill memory with constant function
 * @s: char s 
 * @b: char b
 * @n: number of byte
 * Return: Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
        unsigned int i;

        for (i = 0; i < n; i++)
        {
                s[i] = b;
        }
        return (s);
}
