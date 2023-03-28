#include "main.h"

/**
 * rev_str - reverse string
 * @s: string pointer
 * Return: reversed string
 */

char *rev_str(char *s)
{
	int x, y = 0;

	char  temp = s[0];

	while (s[y] != '\0')
		y++;

	for (x = 0; x < y; x++)
	{
		y--;
		temp = s[x];
		s[x] = s[y];
		s[y] = temp;
	}
	return (s);
}

/**
 * putchar_n - print charactor
 * @str: stiing variable
 * Return: 0
 */

void putchar_n(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
		putchar_c(str[x]);
}

/**
 * print_num - calculate length
 * @x: int number
 * @base: int number
 * Return: length
 */

unsigned int print_num(unsigned int x, int base)
{
	unsigned int i;

	for (i = 0; x > 0; i++)
		x = x / base;
	return (i);
}
