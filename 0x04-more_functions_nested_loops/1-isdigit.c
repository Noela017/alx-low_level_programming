#include "main.h"
/**
 * _isdigit - checks for a digit 0 through 9
 * @c: digit input
 *
 * Return: 1 if is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c == 0 || c == 1 || c == 2 || c == 3 || c == 4
	|| c == 5 || c == 6 || c == 7 || c == 8 || c == 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
