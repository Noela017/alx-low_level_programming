#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @d: the digit
 *
 * Return: last digit
 */
int print_last_digit(int d)
{
	int y;

	y = (d % 10);

	if (y < 0)
	{
		y = (-1 * y);
	}

	_putchar(y + '0');
	return (y);
}
