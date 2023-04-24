#include "main.h"

/**
 * print_percent - prints % that printed the percentage.
 * @format: format that is to be printed.
 * @pa: va_list is the list.
 * Return: number of characters printed
 */

int print_percent(char *format, va_list pa)
{
	(void)format;
	(void)pa;
	_putchar('%');
	return (1);
}
