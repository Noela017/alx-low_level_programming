#include <stdlib.h>
#include "main.h"
/**
 * *_memset - allocate memory for an array
 * @s: memory area
 * @b: the character
 * @n: num of times
 * Return: pointer to s
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
