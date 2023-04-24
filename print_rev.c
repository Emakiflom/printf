#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
*print_rev - prints string in reverse order.
*@r: string to be print.
*Return: number of chars printed
*/

int print_rev(va_list r)
{
	char *st;
	int i, j = 0;

	st = va_arg(r, char *);
	if (st == NULL)
		st = ")llun(";
	for (i = 0; st[i] != '\0'; i++)
		;
	for (i -= 1 ; i >= 0; i--)
	{
		_putchar(st[i]);
		j++;
	}
	return (j);
}
