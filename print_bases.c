#include "main.h"

/**
 * print_hex - prints a number in hexadecimal in lower case.
 * @l: va_list arguments from _printf function.
 * @f: pointer to the struct flags  from stract.
 * Return: the number of char to be printed.
 */
int print_hex(va_list l, flags_t *f)
{
	unsigned int number = va_arg(l, unsigned int);
	char *str = convert(number, 16, 1);
	int counter = 0;

	if (f->hash == 1 && str[0] != '0')
		counter += _puts("0x");
	counter += _puts(str);
	return (counter);
}

/**
 * print_hex_big - prints a number in hexadecimal in upercase.
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags  from stract.
 * Return: the number of char to be printed.
 */
int print_hex_big(va_list l, flags_t *f)
{
	unsigned int number = va_arg(l, unsigned int);
	char *str = convert(number, 16, 0);
	int counter = 0;

	if (f->hash == 1 && str[0] != '0')
		counter += _puts("0X");
	counter += _puts(str);
	return (counter);
}

/**
 * print_binary - prints a number in base 2 based on the input.
 * @l: va_list arguments from _printf function.
 * @f: pointer to the struct flags to spacifay flag.
 * Return: the number of char to be printed.
 */
int print_binary(va_list l, flags_t *f)
{
	unsigned int number = va_arg(l, unsigned int);
	char *str = convert(number, 2, 0);

	(void)f;
	return (_puts(str));
}

/**
 * print_octal - prints a number in base 8
 * @l: va_list arguments from _printf function.
 * @f: pointer to the struct flags to spacifay flag.
 * Return: the number of char to be printed.
 */
int print_octal(va_list l, flags_t *f)
{
	unsigned int number = va_arg(l, unsigned int);
	char *str = convert(number, 8, 0);
	int counter = 0;

	if (f->hash == 1 && str[0] != '0')
		counter += _putchar('0');
	counter += _puts(str);
	return (counter);
}
