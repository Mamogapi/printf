#include <main.h>

/**
 * putchar_c - writes the charaters
 * @c: integer variable
 *
 * Return: integer
 */

int putchar_c(int c)
{
	char a[1];

	a[0] = (char)c;

	return (write(0, a, 1));
}
