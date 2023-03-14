#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - func copy of the string
 * @str: the string
 * Return: pointer to new allo space
 */
char *_strdup(char *str)
{
	char *b;
	int x;
	int r;

	x = 0;
	r = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[x] != '\0')
		x++;

	b = malloc(sizeof(char) * (x + 1));
	if (b == NULL)
	{
		return (NULL);
	}
	for (r = 0; str[r]; r++)
	{
		b[r] = str[r];
	}
	return (b);
}
