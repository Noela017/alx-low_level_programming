#include "main.h"
/**
 * print_alphabet_x10 - output lowercase ten times
 * Return void
 */
void print_alphabet_x10(void)
{
	char y;

	y = 'a';
	while (y <= 'z')
	{
		_putchar(y);
		y++;
	}
	_putchar('\n');
}
