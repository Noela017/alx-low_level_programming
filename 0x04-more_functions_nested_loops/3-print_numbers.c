#include "main.h"
/**
 * print_numbers - print numbers form 0 to 9
 * Return: numbers
 */
void print_numbers(void)
{
int a;

a = 0;
while (a < 10)
{
	_putchar(a + '0');
	a++;
}
_putchar('\n');
}
