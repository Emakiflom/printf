#include "main.h"

/**
 * print_address - prints address for input in hexadecimal.
 * @l: va_list arguments for _printf specification.
 * @f: pointer to the struct flags to spacifay flag.
 * Return: number of char to be printed
 */

int print_address(va_list l, flags_t *f)
{
	char *string_g;
	unsigned long int p = va_arg(l, unsigned long int);

	register int counter = 0;

	(void)f;

	if (!p)
		return (_puts("(nil)"));
	string_g = convert(p, 16, 1);
	counter += _puts("0x");
	counter += _puts(string_g);
	return (counter);
}
