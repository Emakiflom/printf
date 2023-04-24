#include "main.h"

/**
 * print_int - prints an integer form the main in this function.
 * @l: va_list arguments from _printf function.
 * @f: pointer to the struct flags to spacifay flag.
 * Return: number of char to be printed.
 */
int print_int(va_list l, flags_t *f)
{
	int n = va_arg(l, int);
	int rest = count_digit(n);

	if (f->space == 1 && f->plus == 0 && n >= 0)
		rest += _putchar(' ');
	if (f->plus == 1 && n >= 0)
		rest += _putchar('+');
	if (n <= 0)
		rest++;
	print_number(n);
	return (rest);
}

/**
 * print_unsigned - prints an unsigned integer as string.
 * @l: va_list arguments from _printf function.
 * @f: pointer to the struct flags to spacifay flag.
 * Return: number of char to be printed.
 */
int print_unsigned(va_list l, flags_t *f)
{
	unsigned int u = va_arg(l, unsigned int);
	char *str = convert(u, 10, 0);

	(void)f;
	return (_puts(str));
}

/**
 * print_number - helper function makes loop to find the num.
 * @n: integer to be printed.
 */
void print_number(int n)
{
	unsigned int num1;

	if (n < 0)
	{
		_putchar('-');
		num1 = -n;
	}
	else
		num1 = n;

	if (num1 / 10)
		print_number(num1 / 10);
	_putchar((num1 % 10) + '0');
}

/**
 * count_digit - returns number of digits in an integer for main function.
 * @i: integer to evaluate
 * Return: number of digits
 */
int count_digit(int i)
{
	unsigned int d = 0;
	unsigned int u;

	if (i < 0)
		u = i * -1;
	else
		u = i;
	while (u != 0)
	{
		u /= 10;
		d++;
	}
	return (d);
}
