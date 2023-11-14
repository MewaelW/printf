#include "main.h"
/**
 * print_char - prints character
 *
 * @ch: character
 * Return: 0
 */
void print_char(char ch)
{
	write(1, &ch, 1);
}
