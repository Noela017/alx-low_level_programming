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
	while (c < 11)
	{
		for (a = 0; a < 15; a++)
		{
			_putchar(a + '0');
		}
	c++;
	_putchar('\n');
	}
}
