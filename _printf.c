#include "main.h"
/**
 * _printf - This function works like the printf function
 *
 * @format: intupt
 * Return: int
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				char ch = va_arg(args, int);

				print_char(ch);
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);

				print_str(str);
			}
			else
			{
				print_direct(format - 1);
				print_direct(format);
			}
		}
		else
		{
			print_direct(format);
		}
		format++;
	}

	va_end(args);
	return (0);
}
