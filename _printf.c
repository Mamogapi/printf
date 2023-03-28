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

	if (format == NULL)
		return (-1);
	va_start(pnt, format);
	num_char = conv_spc(format, pnt, 0);
	va_end(pnt);
	return (num_char);
}
