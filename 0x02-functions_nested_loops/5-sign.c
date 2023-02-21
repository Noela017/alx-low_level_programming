#include "main.h"
/**
 * print_sign - check if n is greater lower or zero
 *@n: value of n
 * Return: Always 0 or 1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}
