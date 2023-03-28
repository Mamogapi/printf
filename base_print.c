#include "main.h"

/**
 * val_check - check for hex and HEX
 * @num: int number
 * @x: char variable
 * Return: Ascii
 */

int val_check(int num, char x)
{
	char *hex = "abcdef";

	char *Hex = "ABCDEF";

	num = num - 10;
	if (x == 'x')
		return (hex[num]);
	else
		return (Hex[num]);
	return (0);
}

/**
 * conv_oct - convert octal number
 * @pnt: va_list
 * Return: integer
 */

int conv_oct(va_list pnt)
{
	int x;
	char *num, *rev_s;
	unsigned int y = va_arg(pnt, unsigned int);

	if (y == 0)
		return (putchar_c('0'));
	if (y < 1)
		return (-1);
	x = print_num(y, 8);
	num = malloc(sizeof(char) * x + 1);

	if (num == NULL)
		return (-1);
	for (x = 0; y > 0; x++)
	{
		num[x] = (y % 8) + 48;
		y = y / 8;
	}
	num[x] = '\0';
	rev_s = rev_str(num);
	if (rev_s == NULL)
		return (-1);

	putchar_n(rev_s);
	free(num);
	free(rev_s);
	return (x);
}

/**
 * conv_hex - convert hex number
 * @pnt: va_list
 * Return: integer
 */

int conv_hex(va_list pnt)
{
	char *num, *rev_s;
	int x, z;
	unsigned int y = va_arg(pnt, unsigned int);

	if (y == 0)
		return (putchar_c('0'));
	if (y < 1)
		return (-1);
	x = print_num(y, 16);
	num = malloc(sizeof(char) * x + 1);
	if (num == NULL)
		return (-1);
	for (x = 0; y > 0; x++)
	{
		z = y % 16;
		if (z > 9)
		{
			z = val_hex(z, 'x');
			num[x] = z;
		}
		else
			num[x] = z + 48;
		y = y / 16;
	}
	num[x] = '\0';
	rev_s = rev_str(num);
	if (rev_s == NULL)
		return (-1);
	putchar_n(rev_s);
	free(num);
	free(rev_s);
	return (x);
}

/**
 * conv_HEX - convert hex number
 * @pnt: va_list
 * Return: integer
 */

int conv_HEX(va_list pnt)
{
	char *num, *rev_s;
	int x, z;
	unsigned int y = va_arg(pnt, unsigned int);

	if (y == 0)
		return (putchar_c('0'));
	if (y < 1)
		return (-1);
	x = print_num(y, 16);
	num = malloc(sizeof(char) * x + 1);
	if (num == NULL)
		return (-1);
	for (x = 0; y > 0; x++)
	{
		z = y % 16
		if (z > 9)
		{
			z = val_hex(z, 'X');
			num[x] = z;
		}
		else
			num[x] = z + 48;
		y = y / 16;
	}
	num[x] = '\0';
	rev_s = rev_str(num);
	if (rev_s == NULL)
		return (-1);
	putchar_n(rev_s);
	free(num);
	free(rev_s);
	return (x);

}

/**
 * conv_bin - convert binary number
 * @pnt: va_list
 * Return: integer
 */

int conv_bin(va_list pnt)
{
	char *num, *rev_s;
	int x, z;
	unsigned int y = va_arg(pnt, unsigned int);

	if (y == 0)
		return (putchar_c('0'));
	if (y < 1)
		return (-1);
	x = print_num(y, 2);
	num = malloc(sizeof(char) * x + 1);
	if (num == NULL)
		return (-1);

	for (x = 0; y > 0; x++)
	{
		if (y % 2 == 0)
			num[x] = '0';
		else
			num[x] = '1';
		y = y / 2;
	}
	num[x] = '\0';
	rev_s = rev_str(num);
	if (rev_s == NULL)
		return (-1);
	putchar_n(rev_s);
	free(num);
	free(rev_s);
	return (x);
}
