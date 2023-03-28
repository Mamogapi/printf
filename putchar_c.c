#include <main.h>

/**
 * putchar_c - writes the charaters
 * @c: charactor variable
 *
 * Return: integer
 */

int putchar_c(char c)
{
	return (write(1, &c, 1));
}
