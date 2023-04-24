#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout display.
 * @c: The character to print in the function.
 * Return: On success 1.
 */
int _putchar(char c)
{
	static char buf[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buf, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
	return (1);
}

/**
 * _puts - prints a string to stdout display.
 * @str: pointer to the string for print.
 * Return: number of chars to be written.
 */
int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
