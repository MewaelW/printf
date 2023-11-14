#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);

void print_char(char ch)
{
	write(1, &ch, 1);
}

void print_str(char *str)
{
	int length = 0;
	while (str[length] != '\0')
	{
        	length++;
    	}
	write(1, str, length);
}

void print_direct(const char *format)
{
	write(1, format, 1);
}

#endif
