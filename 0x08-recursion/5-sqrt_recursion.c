#include "main.h"
/**
 * _sqrt_recursion - function for sqrt of num
 * @n: the number to find sqrt of
 * Return: value
 * actual_root - recurses to find the natural sqrt of num
 * @i: iterator
 */
int actual_root(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_root(n, 0));
}


int actual_root(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_root(n, i + 1));
}
