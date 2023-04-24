#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int print_int(va_list i);
int print_dec(va_list d);

/**
  * struct code_format - Struct format
  * @sc: The specifiers
  * @f: The function associated
  */
typedef struct List_format
{
	char *sc;
	int (*f)(va_list);
} List_f;

#endif
