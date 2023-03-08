#include "main.h"
/**
 * _print_rev_recursion - Function to print string in reverse
 * @s: the string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(++s);
		--s;
		_putchar(*s);
	}
}
