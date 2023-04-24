#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

/**
 * struct flags - struct containing flags to "turn on".
 * @plus: flag for the '+' character.
 * @space: flag for the ' ' character.
 * @hash: flag for the '#' character.
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct printHandler - struct to choose the right function depending
 * @c: format specifier.
 * @f: pointer to the correct printing function.
 */
typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} print_h;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c, flags_t *f);
int print_string(va_list s, flags_t *f);
int print_int(va_list i, flags_t *f);
int print_dec(va_list d, flags_t *f);

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
