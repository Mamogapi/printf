#include "main.h"

/**
 * conv_rev - print the reversed string
 * @pnt: va_list
 *
 * Return: integer
 */

int conv_rev(va_list pnt)
{
	int x;
	char *str, *str1;

	str = va_arg(pnt, char*);

	if (str == NULL)
		return (-1);
	str1 = rev_str(str);
	if (str1 == NULL)
		return (-1);
	for (x = 0; str1[x] != '\0'; x++)
		putchar_c(str1[x]);
	return (x);
}

/**
 * conv_rot - convert string to rot13
 * @pnt: va_list
 *
 * Return: converted string
 */

int conv_rot(va_list pnt)
{
	int x, z;

	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str;

	str = va_arg(pnt, char *);
	if (str == NULL)
		return (-1);
	for (x = 0; str[x] != '\0'; x++)
	{
		for (z = 0; s1[z] != '\0'; z++)
		{
			if (str[x] == s1[z])
			{
				str[x] = s2[z];
				putch_c(str[x]);
				break;
			}
		}
	}
	return (x);
}
