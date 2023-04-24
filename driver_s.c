#include "main.h"

/**
 * driver_s - selector for type of selector.
 * @format: string of the selector.
 * selector[] - ment of the struct.
 * Return: a pointer
 * structype selector - Struct
 */

int (*driver_s(char *format))(char *format, va_list)
{
int j;

structype selector[] = {
{"%c", printc},
{"%s", printstr},
{"%d", printint},
{"%i", printint},
{"%%", printpercent},
{"%x", printhex},
{"%X", printHEX},
{"%o", printocta},
{NULL, NULL}
};

if (format[1] == ' ' || format[1] == '\0')
return (NULL);
for (j = 0; selector[i].q; j++)
{
if (format[1] == selector[j].q[1])
return (selector[j].u);
}
return (NULL);
}
