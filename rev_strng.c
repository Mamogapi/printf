#include "main.h"

/**
 * rev_str - reverse string
 * @s: string pointer
 *
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
		b--;
		temp = s[x];
		s[x] = s[y];
		s[y] = temp;
	}
	return (s);
}
