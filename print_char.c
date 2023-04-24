#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_char - writes the character c 
 * @c: Character to print
 * Return: 1.
 */
int print_char(va_list c)
{
	unsigned char a_char;

	a_char = va_arg(c, int);
	_putchar(a_char);
	return (1);
}
/**
 * print_porcentage - % persentage printer
 * Return: 1.
 */

int print_porcentage(void)
{
	_putchar('%');
	return (1);
}
