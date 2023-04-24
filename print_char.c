#include "main.h"

/**
 * print_char - prints a char one by one and replace in format.
 * @pa: format of char in the function.
 * @format: format to be printed
 * Return: number char to be printf.
 */

int print_char(char *format, va_list pa)
{
	(void)format;
	_putchar(va_arg(pa, int));
	return (1);
}
