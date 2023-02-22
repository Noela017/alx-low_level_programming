#include <stdio.h>

/**
 * main- compute and print sum of multiples of 3 or 5
 * Return: always (0) on success
 */
int main(void)
{
	int n;
	int sum;
	int x;
	int p;

	n = 0;
	sum = 0;
	while (n < 1024)
	{
		x = n % 3;
		p = n % 5;
	if (x == 0 || p == 0)
	{
		sum = sum + n;
	}
	n++;
	}
	printf("%d\n", sum);
	return (0);
}
