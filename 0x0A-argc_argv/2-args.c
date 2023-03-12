#include <stdio.h>
#include "main.h"
/**
 * main - program to print all arg
 * @argc: no of arg
 * @argv: array
 *
 * Return: all args
 */
void main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);

}
