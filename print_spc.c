#include "main.h"

/**
 * conv_perc - print character
 * @pnt: va_list
 *
 * Return: number of the charater to be printed
 */

int conv_perc(__attribute__((unused))va_list pnt)
{
	putchar_c('%');
	return (1);
}

/**
 * conv_char - print char
 * @format: string variable
 * @pnt: va_list
 * @x: integer value
 * Return: integer value
 */

int conv_char(const char *format, va_list pnt, int x)
{
	int w;

	w = va_arg(pnt, int);

	purchar_c(w);
	return (conv_spc(format, pnt, x + 1));
}

/**
 * conv_str - print string
 * @format: string variable
 * @pnt: va_list
 * @x: integer value
 * Return: integer value
 */

int conv_str(const char *format, va_list pnt, int x)
{
	const char *str;

	str = va_arg(pnt, const char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	while (*str)
	{
		putchar_c(*s++);
		x++;
	}
	return (conv_spc(format, pnt, x));
}

/**
 * conv_int - print decimal
 * @format: string variable
 * @pnt: va_list
 * @x: integer value
 * Return: integer value
 */

int conv_int(const char *format, va_list pnt, int x)
{
	int w = va_arg(pnt, int);

	unsigned long long u;

	if (w < 0)
	{
		putchar_c('-');
		x++;
		u = -(unsigned int)w;
	}
	else
	{
		u = w;
	}
	x += print_num(u, 10, "0123456789");
	return (conv_spc(format, pnt, x));
}
