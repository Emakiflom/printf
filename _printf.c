#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
  * find_function - function that finds formats for _printf
  * @format: format (char, string, int, decimal)
  * Return: NULL or function associated ;
  */

int (*find_function(const char *format))(va_list)
{
	unsigned int j = 0;
	List_f find_f[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	while (find_f[j].sc)
	{
		if (find_f[j].sc[0] == (*format))
			return (find_f[j].f);
		j++;
	}
	return (NULL);
}

/**
 * get_flag - turns on flags if _printf finds
 * @s: character that holds the flag specifier
 * @f: pointer to the struct flags in which we turn the flags on
 * Return: 1 if a flag has been turned on, 0 otherwise
 */

int get_flag(char s, flags_t *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}
	return (i);
}

/**
  * _printf - function produces output according to a format.
  * @format: format determine format type
  * Return: size output text;
  */

int _printf(const char *format, ...)
{
	va_list af;
	int (*f)(va_list);
	unsigned int i = 0, cpint = 0;

	if (format == NULL)
		return (-1);
	va_start(af, format);
	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			cpint++;
			i++;
		}
		if (format[i] == '\0')
			return (cpint);
		f = find_function(&format[i + 1]);
		if (f != NULL)
		{
			cpint += f(af);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		cpint++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(af);
	return (cpint);
}
