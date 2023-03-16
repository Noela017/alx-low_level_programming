#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - link two string
 * @s1: string one
 * @s2: string to link from
 * @n: num of bytes
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;

	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
	{
		len1++;
	}
	while (s2 && s2[len2])
	{
		len2++;
	}
	if (n < len2)
	{
		s = malloc(sizeof(char) * (len1 + n + 1));
	}
	else
	{
		s = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	if (!s)

		return (NULL);

	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < len2 && i < (len1 + n))
	{
		s[i++] = s2[j++];
	}
	while (n >= len2 && i < (len1 + len2))
	{
		p[i++] = s2[j++];
	}
	p[i] = '\0';
	return (s);
}
