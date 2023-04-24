#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct structprint - structure containing
 * @q: the location and method to translate data to characters.
 * @u: print function for specific type.
 * Return: int
 */
typedef struct structprint
{
	char *q;
	int (*u)(char *format, va_list);
} s_type;

int _putchar(char ch);
int _puts(char *string);
int print_char(char *format, va_list);
int print_str(char *format, va_list);
int (*driver_s(char *format))(char *format, va_list);
int _printf(char *format, ...);
int print_int(char *format, va_list pa);
int integer(int number);
int conta_dor_digit(int number);
int _abs(int number);
int print_percent(char *format, va_list pa);
int print_hex(char *format, va_list);
int print_HEX(char *format, va_list);
int print_octa(char *format, va_list);
int print_unsign(char *format, va_list);
int print_rev(va_list r);
int print_rot(va_list R);

#endif
