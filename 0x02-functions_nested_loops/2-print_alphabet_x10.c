#include "main.h"
/**
 * print_alphabet_x10 - output lowercase ten times
 * Return void
 */
void print_alphabet_x10(void)
{
	char y;
	int count;

	count = 0;
	y = 'a';
	for(count = 0; count <= 10; count++)
	{

	while (y <= 'z')
	{
		_putchar(y);
		y++;
	}
	_putchar('\n');
	}
}
