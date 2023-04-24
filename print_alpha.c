#include "main.h"

/**
 * print_string - loops through a string and print it all.
 * @l: va_list arguments from _printf from parameter.
 * @f: pointer to the struct flags  from stract.
 * Return: number of char to be printed.
 */
int print_string(va_list l, flags_t *f)
{
	char *ss = va_arg(l, char *);

	(void)f;

	if (!ss)
		ss = "(null)";
	return (_puts(ss));
}

/**
 * print_char - prints a character one by one.
 * @l: va_list arguments from _printf function.
 * @f: pointer to the struct flags to spacifay flag.
 * Return: number of char to be printed.
 */
int print_char(va_list l, flags_t *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}
