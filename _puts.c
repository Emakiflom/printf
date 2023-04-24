#include "main.h"

/**
 * _puts - prints a string new line, to the end.
 * @string: input string for the function
 * Return: count string and return it to main.
 */

int _puts(char *string)
{
	int conta_dor = 0;

	while (*string)
	{
		_putchar(*string);
		string++;
		conta_dor++;
	}
	return (conta_dor);
}
