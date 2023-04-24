#include "main.h"

/**
 * print_bigS - to handle Non printable characters.
 * @l: va_list arguments from _printf function.
 * @f: pointer to the struct flags to spacifay flag.
 * Return: number of char to be printed.
 */
int print_bigS(va_list l, flags_t *f)
{
	int i, counter = 0;
	char *res;
	char *s = va_arg(l, char *);

	(void)f;
	if (!s)
		return (_puts("(null)"));

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_puts("\\x");
			counter += 2;
			res = convert(s[i], 16, 0);
			if (!res[1])
				counter += _putchar('0');
			counter += _puts(res);
		}
		else
			counter += _putchar(s[i]);
	}
	return (counter);
}

/**
 * print_rev - prints a string in reverse order.
 * @l: va_list arguments from _printf function.
 * @f: pointer to the struct flags to spacifay flag.
 * Return: number of char to be printed.
 */
int print_rev(va_list l, flags_t *f)
{
	int i = 0, j;
	char *s = va_arg(l, char *);

	(void)f;
	if (!s)
		s = "(null)";

	while (s[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	return (i);
}

/**
 * print_rot13 - prints a string using rot13 functionn.
 * @l: va_list arguments from _printf function.
 * @f: pointer to the struct flags to spacifay flag.
 * Return: number of char to be printed.
 */
int print_rot13(va_list l, flags_t *f)
{
	int i, j;
	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(l, char *);

	(void)f;
	for (j = 0; s[j]; j++)
	{
		if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
			_putchar(s[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (s[j] == rot13[i])
					_putchar(ROT13[i]);
			}
		}
	}

	return (j);
}

/**
 * print_percent - prints a percent with out handlinf it like flag.
 * @l: va_list arguments from _printf function.
 * @f: pointer to the struct flags to spacifay flag.
 * Return: number of char to be printed.
 */
int print_percent(va_list l, flags_t *f)
{
	(void)l;
	(void)f;
	return (_putchar('%'));
}
