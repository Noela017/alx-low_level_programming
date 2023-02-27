#include "main.h"
/**
 * swap_int - function to swap values of integers
 * @a: value of integer one
 * @b: value of integer two
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
