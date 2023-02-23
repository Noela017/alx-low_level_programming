#include "main.h"
/**
 * print_line - print character _
 * @n: number of times the character is printed
 * Return: void
 */
void print_line(int n)
{
	int x;

	x = 0;
	while (x < n)
	{
		if (n == 0)
		{
			break;
		}
		else
		{
			_putchar('_');
			continue;
		}
		x++;
	}
	_putchar('\n');
}
