#include "main.h"
/**
 * factorial - Function to return factorial
 * @n: the factorial of this number
 * Return: the factorial
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * (factorial(n - 1)));
}
