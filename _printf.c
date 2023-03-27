#include <stdio.h>
#include <stdarg.h>
#include "main.h"

char *conversion(unsigned int y, int z);

/**
 * _printf -  function that produces output according to a format
 * @format:  is a character string
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list pnt;
	int x;
	const char *str1;
	char *str2;

	va_start(pnt, format);

	for (str1 = format; *str1 != '\0'; str1++)
	{
		while (*str1 != '%')
		{
			putchar(*str1);
			str1++;
		}
		if (*str1 == '\0')
			return;
		str1++;

		if (*str1 == 'c')
		{
			x = va_arg(pnt, int);

			putchar(x);
			break;
		}
		if (*str1 == 's')
		{
			str2 = va_arg(pnt, char *);

			puts(str2);
			break;
		}
		if (*str1 == 'd' || *str1 == 'i')
		{
			x = va_arg(pnt, int);

			if (x < 0)
			{
				x = -x;
				putchar('-');
			}
			puts(conversion(x, 10));
			break;
		}
	}
	va_end(pnt);
	return (0);
}

/**
 * conversion - function convert the integer to string
 * @y: integer value variable
 * @z: integer value variable
 *
 * Return: converted integer
 */

char *conversion(unsigned int y, int z)
{
	static const char str[] = "0123456789ABCDEF";
	static char strng[50];
	char *pntr;

	pntr = &strng[49];
	*pntr = '\0';

	do {
		*--pntr = str[y % z];
		y /= z;
	} while (y != 0);

	return (pntr);
}
