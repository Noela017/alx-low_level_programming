#include <stdio.h>
#include "main.h"
/**
 * main - programme to print no of arg passed
 * @argc: no of command line arg
 * @argv: array of size argc
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
