#include "main.h"

/**
 * get_flag - turns on flags if  the function _printf finds.
 * @s: character to cach the flag specifier.
 * @f: pointer to the struct flags to turn the flags on.
 * Return: 1 if the flag is turned on, if not 0.
 */

int get_flag(char s, flags_t *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
