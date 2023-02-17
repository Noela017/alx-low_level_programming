#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Program to output aphabets both lower and upper
 *
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x;
	char X;

	x = 'a';
	X = 'A';
	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (X <= 'Z')
	{
		putchar(X);
		X++;
	}
	putchar('\n');
	return (0);
}
