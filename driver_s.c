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

s_type selector[] = {
{"%c", print_char},
{"%s", print_str},
{"%d", print_int},
{"%i", print_int},
{"%%", print_percent},
{"%x", print_hex},
{"%X", print_HEX},
{"%o", print_octa},
{"%r", print_rev},
{"%R", print_rot},
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
