#include "main.h"
/**
 *print_alphabet - output lowercase alphabet
 *return : void
 */
void print_alphabet(void)
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
