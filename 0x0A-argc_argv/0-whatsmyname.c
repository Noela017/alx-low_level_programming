#include <stdio.h>

/**
 * main - programme to output its name
 * @argc: num of command line arg
 * @argv: array
 * Return: 0 if success
 */
int main(int argc, char **argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
