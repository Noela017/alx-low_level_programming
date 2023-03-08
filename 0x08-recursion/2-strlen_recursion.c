#include "main.h"
/**
 * _strlen_recursion - Function to print length
 * @s: the string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;
		count = _strlen_recursion(s + 1) + count;
	}
	return (count);
}
