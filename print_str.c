#include "main.h"

/**
 * print_str- print str one by one and replace it in the format.
 * @pa: format of char in the function.
 * @format: format str to be printed.
 * Return: number str for print.
 */

int print_str(char *format, va_list pa)
{
	char *string = va_arg(pa, char *);
	int conta_dor;
	(void)format;

	if (string == NULL)
		string = "(null)";
	conta_dor = _puts(string);
	return (conta_dor);
