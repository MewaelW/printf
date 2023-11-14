#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
int _printf(const char *format, ...);
void print_char(char ch);
void print_int(int num);
void print_str(char *str);
void print_direct(const char *format);
int putchr(char c);
int putss(char *c);

#endif
