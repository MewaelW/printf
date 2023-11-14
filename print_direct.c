#include "main.h"
/**
 * print_direct - prints format
 *
 * @format: format
 * Return: 0
 */
void print_direct(const char *format)
{
	write(1, format, 1);
}
