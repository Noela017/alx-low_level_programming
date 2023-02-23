#include "main.h"
/**
 * more_numbers - print numbers ten times
 * Return: numbers ten times
 */
void more_numbers(void)
{
	int a;
	int c;

	c = 0;
	for (c = 0; c <= 10; c++)
	{
		for (a = 0; a < 15; a++)
		{
			_putchar(a + '0');
		}
	_putchar('\n');
	}
}
