#include "main.h"
/**
 * print_line - print character _
 * @n: number of times the character is printed
 * Return: void
 */
void print_line(int n)
{
	int x;

	for (x = 0; x <= n; x++)
	{
		if (n == '0')
		{
			break;
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
