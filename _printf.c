#include "main.h"

/**
 * _printf - prints formatted data to the end
 * @format: string that contains the format that isto print
 * Return: number of characters
 */

int _printf(char *format, ...)
{
	int wri = 0, (*s_type)(char *, va_list);
	char qa[3];
	va_list fa;

	if (format == NULL)
		return (-1);
	qa[2] = '\0';
	va_start(fa, format);
	_putchar(-1);
	while (format[0])
	{
		if (format[0] == '%')
		{
			s_type = driver_s(format);
			if (s_type)
			{
				qa[0] = '%';
				qa[1] = format[1];
				wri += s_type(qa, fa);
			}
			else if (format[1] != '\0')
			{
				wri += _putchar('%');
				wri += _putchar(format[1]);
			}
			else
			{
				wri += _putchar('%');
				break;
			}
			format += 2;
		}
		else
		{
			wri += _putchar(format[0]);
			format++;
		}
	}
	_putchar(-2);
	return (wri);
}
