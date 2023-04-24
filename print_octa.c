#include "main.h"

/**
 * print_octa - prints a hexadecimal number.
 * @format: format that is to be print in hexadecimal.
 * @pa: list that contains hexadecimal number.
 * Return: number.
 */

int print_octa(char *format, va_list pa)
{
	unsigned int num = va_arg(pa, unsigned int);
	unsigned int cop_iam;
	char *octa_am;
	int i, i2 = 0, cont_ame = 0;
	(void)format;

	if (num == 0)
		return (_putchar('0'));
	for (cop_iam = num; cop_iam != 0; i2++)
	{
		cop_iam = cop_iam / 8;
	}
	octa_am = malloc(i2);
	if (!octa_am)
		return (-1);
	for (i = i2 - 1; i >= 0; i--)
	{
		octa_am[i] = num % 8 + '0';
		num = num / 8;
	}
	for (i = 0; i < i2 && octa_am[i] == '0'; i++)
		;
	for (; i < i2; i++)
	{
		_putchar(octa_am[i]);
		cont_ame++;
	}
	free(octa_am);
	return (cont_ame);
}
