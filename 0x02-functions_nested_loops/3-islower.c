#include "main.h"
/**
 * int _islower- check whether is lower
 * returns 1 if is true and 0 - if false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
