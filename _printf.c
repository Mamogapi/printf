#include "main.h"

/**
 * _printf -  function that produces output according to a format
 * @format:  is a character string
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list pnt;
	int num_char;

	dispatch func[] = {
	{"c", conv_char},
	{"s", conv_str},
	{"%", conv_perc},
	{"d", conv_int},
	{"i", conv_int},
	{"b", conv_bin},
	{"r", conv_rev},
	{"R", conv_rot},
	{"u", unsign_int},
	{"o", conv_oct},
	{"x", conv_hex},
	{"X", conv_HEX},
	{NULL, NULL}
	};



	if (format == NULL)
		return (-1);
	va_start(pnt, format);
	num_char = conv_spc(format, func, pnt);
	va_end(pnt);
	return (num_char);
}
