#include "main.h"

/**
 * int_to_str - It converts integers to strings.
 * @num: The integer to be converted.
 */
int int_to_str(int num)
{
	char buffer[MAX_BUFFER_SIZE];
	char *ptr = buffer;
	char *start;
	char *end;
	int digit;
	char temp;
	int length;

	if (num == 0)
	{
		*ptr++ = '0';
	}
	else
	{
		if (num < 0)
		{
			write(1, "-", 1);
			num = -num;
		}
		while (num > 0)
		{
			digit = num % 10;
			*ptr++ = digit + '0';
			num /= 10;
		}
		start = buffer;
		end = ptr - 1;
		while (start < end)
		{
			temp = *start;
			*start++ = *end;
			*end-- = temp;
		}
	}
	*ptr = '\0';
	length = ptr - buffer;
	write(1, buffer, length);
	return (length);
}

/**
 * _printf - It is used formatted output.
 * In this case It can only handle the d and i conversion specifiers.
 * @format: It is format string argument.
 * @...: It is number of arguments.
 *
 * Return: The number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	va_list list_of_args;
	int num_of_char;
	signed int d;
	signed int i;

	num_of_char = 0;

	if (format == NULL)
		return (-1);
	va_start(list_of_args, format);
	while (*format)
	{
		if (*format != '%')
		{
			if (*format == '\n')
				num_of_char++;
			write(1, format, 1);
			num_of_char++;
		}
		else
		{
			format++;
			if (*format == '\0')
				return (-1);
			if (*format == 'd')
			{
				d = va_arg(list_of_args, signed int);
				num_of_char += int_to_str(d);
			}
			if (*format == 'i')
			{
				i = va_arg(list_of_args, signed int);
				num_of_char += int_to_str(i);
			}
		}
		format++;
	}
	va_end(list_of_args);
	return (num_of_char);
}
