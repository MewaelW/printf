#include "main.h"
/**
 * putss - prints a string
 *
 * @c: a string
 * Return: string
 */
int putss(char *c)
{
	int j = 0;

	if (c)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			putchr(c[j]);
		}
	}
	return (j);
}

