#include <stdio.h>
#include "main.h"
/**
 * progname - programme to output its name
 * @argc: num of command line arg
 * @argv: array
 * Return: name of programme
 */
void progname(int argc, char *argv[])
{
	printf("%s", argv[argc - 1]);
	printf("\n");
}
