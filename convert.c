#include "main.h"

/**
 * convert - converts the num and base into string.
 * @num: input number from parameter.
 * @base: input base from parameter.
 * @lowercase: flag if hexa values need to be lowercase
 * Return: string to be returned.
 */

char *convert(unsigned long int num, int base, int lowercase)
{
	static char *replace;
	static char buffer[50];
	char *pointr;

	replace = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	pointr = &buffer[49];
	*pointr = '\0';
	do {
		*--pointr = replace[num % base];
		num /= base;
	} while (num != 0);

	return (pointr);
}
