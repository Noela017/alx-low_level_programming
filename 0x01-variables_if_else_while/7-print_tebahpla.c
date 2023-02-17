#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char c;

	c = 'z';
	while (c <= 'z')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
