#include "main.h"

/**
 * print_hex - prints a hexadecimal number from main.
 * @format: format that is to print in hexadecimal.
 * @pa: list that contains hexadecimal number
 * Return: number.
 */

int print_hex(char *format, va_list pa)
{
	unsigned int num = va_arg(pa, unsigned int);
	unsigned int num2;
	int i, i2, copy, count_ame = 0;
	char *num_hex;

	(void)format;

	if (num == 0)
		return (_putchar('0'));
	for (num2 = num; num2 != 0; count_ame++)
	{
		num2 = num2 / 16;
	}
	num_hex = malloc(count_ame);
	for (i = 0; num != 0; i++)
	{
		copy = num % 16;
		if (copy < 10)
			num_hex[i] = copy + '0';
		else
			num_hex[i] = copy - 10  + 'a';
		num = num / 16;
	}
	for (i2 = i - 1; i2 >= 0; i2--)
		_putchar(num_hex[i2]);
	free(num_hex);
	return (count_ame);
}

/**
 * print_HEX - prints a hexadecimal number from main.
 * @format: format to print be in hexadecimal.
 * @pa: va_list that contains hexadecimal that is to print.
 * Return: number of digits printed.
 */

int print_HEX(char *format, va_list pa)
{
	unsigned int NUM = va_arg(pa, unsigned int);
	unsigned int NUM2;
	int I, I2, COPY, COUNT_AME = 0;
	char *NUM_HEX;

	(void)format;

	if (NUM == 0)
		return (_putchar('0'));
	for (NUM2 = NUM; NUM2 != 0; COUNT_AME++)
	{
		NUM2 = NUM2 / 16;
	}
	NUM_HEX = malloc(COUNT_AME);
	for (I = 0; NUM != 0; I++)
	{
		COPY = NUM % 16;
		if (COPY < 10)
			NUM_HEX[I] = COPY + '0';
		else
			NUM_HEX[I] = COPY - 10 + 'A';
		NUM = NUM / 16;
	}
	for (I2 = I - 1; I2 >= 0; I2--)
		_putchar(NUM_HEX[I2]);
	free(NUM_HEX);
	return (COUNT_AME);
}
