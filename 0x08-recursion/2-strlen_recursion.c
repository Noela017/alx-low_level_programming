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
		count = _strlen_recursion(s++) + count;
	}
	return (count);
}
