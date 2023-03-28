#include "main.h"

/**
 * conv_oct - convert octal number
 * @format: string variable
 * @pnt: va_list
 * @x: integer variable
 * Return: integer
 */

int conv_oct(const char *format, va_list pnt, int x)
{
	unsigned int y = va_arg(pnt, unsigned int);

	x += print_num(y, 8, "01234567");
	return (conv_spc(format, ap, x));
}

/**
 * conv_unsign_int - convert unsigned int number
 * @format: string variable
 * @pnt: va_list
 * @x: integer variable
 * Return: integer
 */

int conv_unsign_int(const char *format, va_list pnt, int x)
{
	unsigned int y = va_arg(pnt, unsigned int);

	x += print_num(y, 10, "0123456789");
	return (conv_spc(format, ap, x));
}

/**
 * conv_hex - convert hex number
 * @format: string variable
 * @pnt: va_list
 * @x: integer variable
 * Return: integer
 */

int conv_hex(const char *format, va_list pnt, int x)
{
	unsigned int y = va_arg(pnt, unsigned int);

	x += print_num(y, 16, "0123456789abcdef");
	return (conv_spc(format, ap, x));
}

/**
 * conv_HEX - convert hex number
 * @format: string variable
 * @pnt: va_list
 * @x: integer variable
 * Return: integer
 */

int conv_HEX(const char *format, va_list pnt, int x)
{
	unsigned int y = va_arg(pnt, unsigned int);

	x += print_num(y, 16, "0123456789ABCDEF");
	return (conv_spc(format, ap, x));
}

/**
 * conv_bin - convert binary number
 * @format: string variable
 * @pnt: va_list
 * @x: integer variable
 * Return: integer
 */
int conv_bin(const char *format, va_list pnt, int x)
{
	unsigned int w = 0, q, z = 1;

	unsigned int y = va_arg(pnt, unsigned int);

	while (y != 0)
	{
		q = y % 2;
		w = w + q * z;
		z = z * 10;
		y = y / 2;
	}
	putchar_c(y);
}
