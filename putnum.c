#include "main.h"

/**
 * print_num - print number
 * @x: unsigned integer
 * @base: unsigned integer
 * @num: number
 * Return: integer variable
 */

int print_num(unsigned long long x, unsigned int base, const char *num)
{
	int y = 1;

	if (x >= base)
		y += print_num(x / base, base, num);
	putchar_c(num[n % base]);
		return (y);
}
