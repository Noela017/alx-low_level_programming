#include "main.h"
/**
 * _strlen - function that returns length of string
 * @s: the string
 * Return: length of string
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*s++)
	{
		count++;
	}

	return (count);
}
