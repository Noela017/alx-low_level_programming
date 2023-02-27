#include "main.h"
/**
 * _strlen - function that returns length of string
 * @s: the string
 * Return: length of string
 */
int _strlen(char *s)
{
	int count;

	while (*s != '\0')
	{
		count++;
	}

	return (count);
}
