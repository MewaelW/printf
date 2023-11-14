#include "main.h"
/**
 * print_str - prints strings
 *
 * @str: string
 * Return: 0
 */
void print_str(char *str)
{
	int length = 0;
	while (str[length] != '\0')
	{
        	length++;
	}
	write(1, str, length);
}
