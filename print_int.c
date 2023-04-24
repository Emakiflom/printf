#include "main.h"

/**
 * _abs - calculates the absolute value from the function.
 * @number: input number that is to be calculated.
 * Return: value that is returned.
 */

int _abs(int number)
{
	if (number < 0)
		return (-1 * number);
	else
		return (number);
}

/**
 * conta_dor_digit - counts the digits in the parameter.
 * @number: input integer that is to be couned.
 * Return: digit count that is returned.
 */

int conta_dor_digit(int number)
{
	int counter = 0;
	int number2 = number;

	if (number <= 0)
		counter += 1;

	while (_abs(number2) != 0)
	{
		number2 = number2 / 10;
		counter++;
	}
	return (counter);
}

/**
 * integer - a function that prints integer.
 * @number: input integer from parameter.
 * Return: digit count to be returned
 */

int integer(int number)
{
	unsigned int unint;
	int counter;

	counter = conta_dor_digit(number);
if (number < 0)
{
_putchar('-');
unint = -number;
}
	else
		unint = number;

	if (unint >= 10)
		integer(unint / 10);
	_putchar(unint % 10 + '0');

	return (counter);
}

/**
 * print_int - prints a number that comes from parameter.
 * @format: format that is to print number
 * @pa: va_list with number to print in order.
 * Return: number of characters printed
 */

int print_int(char *format, va_list pa)
{
	int number = va_arg(pa, int);
	int num;
	(void)format;

	num = integer(number);

	return (num);
}
