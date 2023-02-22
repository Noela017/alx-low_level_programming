#include <stdio.h>
/**
 * main - print 50 fibonnacci numbers
 * Return: 0 if success
 */
int main(void)
{
	unsigned long a;
	unsigned long b;
	unsigned long sum;
	int count;

	count = 2;
	sum = 0;
	a = 1;
	b = 2;
	printf("%lu", a);
	printf(",");
	printf(" ");
	printf("%lu", b);
	printf(",");
	printf(" ");
	while (count <= 50)
	{
		sum = a + b;
		printf("%lu", sum);
		a = b;
		b = sum;

		if (count == 50)
		{
			printf("\n");
		}
		else
		{
			printf(",");
			printf(" ");
		}
	count++;
	}
	return (0);
}
