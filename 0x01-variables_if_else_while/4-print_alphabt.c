#include <stdio.h>

/**
 * main- all lowercase letters except q and e
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
		if (x != 'q' && x != 'e')
		{
			putchar(x);
		}
		x++;
	}
	putchar('\n');
	return (0);
}
