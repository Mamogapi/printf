#include "main.h"

/**
 * conv_perc - print character
 * @pnt: va_list
 * Return: number of the charater to be printed
 */

int conv_perc(__attribute__((unused))va_list pnt)
{
	putchar_c('%');
	return (1);
}

/**
 * conv_char - print char
 * @pnt: va_list
 * Return: integer value
 */

int conv_char(va_list pnt)
{
	int w;

	w = va_arg(pnt, int);

	putchar_c(w);
	return (1);
}

/**
 * conv_str - print string
 * @pnt: va_list
 * Return: integer value
 */

int conv_str(va_list pnt)
{
	char *str;
	int x;

	str = va_arg(pnt, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	for (x = 0; str[x] != '\0'; x++)
		putchar_c(str[x]);
	return (x);
}

/**
 * conv_int - print decimal
 * @pnt: va_list
 * Return: integer value
 */

int conv_int(va_list pnt)
{
	int x;

	x = print_no(pnt);
	return (x);
}

/**
 * conv_unsign_int - print unsighted num
 * @pnt: va_list
 * Return: int value
 */

int unsign_int(va_list pnt)
{
	unsigned int num;

	num = va_arg(pnt, unsigned int);

	if (num == 0)
		return (print_unsign(num));

	if (num < 1)
		return (-1);
	return (print_unsign(num));
}
