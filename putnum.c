#include "main.h"

/**
 * print_no - print number
 * @pnt: va_list
 * Return: integer variable
 */

int print_no(va_list pnt)
{
	int x, y, z;
	unsigned int a;

	x = va_arg(pnt, int);

	y = 1;
	z = 0;

	if (x < 0)
	{
		z += putchar_c('-');
		a = x * -1;
	}
	else
		a = x;
	for (; a / y > 9; )
		y *= 10;
	for (; y != 0; )
	{
		z += putchar_c('0' + a / y);
		a %= y;
		y /= 10;
	}
	return (z);
}

/**
 * print_unsign - print number
 * @n: unsignd number
 * Return: number of char
 */

int print_unsign(unsigned int n)
{
	int y, z;
	unsigned int a;

	y = 1;
	z = 0;
	a = n;

	for (; a / y > 9; )
		y *= 10;
	for (; y != 0; )
	{
		z += putchar_c('0' + a / y);
		a %= y;
		y /= 10;
	}
	return (z);
}
