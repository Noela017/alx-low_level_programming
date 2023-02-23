#include "main.h"
/**
 * print_most_numbers - printmost numbers
 * Return: most numbers but two and four
 */
void print_most_numbers(void)
{
	int x;

	x = 0;
	while (x < 10)
	{
		if (x != 2 || x != 4)
		{
			_putchar(x + '0');
		}
		x++;
	}
	_putchar('\n');
}
