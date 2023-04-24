#include "main.h"

/**
* print_int - function that prints an integer i.
* @i: integer that is to be printed.
* Return: size in text.
*/

int print_int(va_list i)
{
	int length, power_ten, j, digit, n;
	int counter = 0, num;

	n = va_arg(i, int);
	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			counter++;
		}
		num = n;
		length = 0;
		while (num != 0)
		{
			num /= 10;
			length++;
		}
		power_ten = 1;
		for (j = 1; j <= length - 1; j++)
			power_ten *= 10;
		for (j = 1; j <= length; j++)
		{
			digit = n / power_ten;
			if (n < 0)
				_putchar((digit * -1) + 48);
			else
				_putchar(digit + '0');
			counter++;
			n -= digit * power_ten;
			power_ten /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (counter);
}
