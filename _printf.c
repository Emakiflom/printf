#include "main.h"

/**
 * _printf - produces output based on the format.
 * @format: the string containing characters and the specifiers to be printed.
 * Return: length of the formatted will be returned.
 */

int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, flags_t *);
	const char *p;
	va_list arg_u;
	flags_t flags = {0, 0, 0};

	register int counter = 0;

	va_start(arg_u, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				counter += _putchar('%');
				continue;
			}
			while (get_flag(*p, &flags))
				p++;
			pfunc = get_print(*p);
			counter += (pfunc)
				? pfunc(arg_u, &flags)
				: _printf("%%%c", *p);
		} else
			counter += _putchar(*p);
	}
	_putchar(-1);
	va_end(arg_u);
	return (counter);
}
