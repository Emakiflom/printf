#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_string - writes the character and print it
 * @s: String to print
 * Return: 1.
 */

int print_string(va_list s, flags_t *f)
{
	char *a_string;
	int  j = 0;

	a_string = va_arg(s, char *);
	if (a_string == NULL)
		a_string = "(null)";
	while (a_string[j])
	{
		_putchar(a_string[j]);
		j++;
	}
	return (j);
}
