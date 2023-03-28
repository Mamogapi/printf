#include "main.h"

/**
 * con_spc - search the for the specificier
 * @format: the string variable
 * @pnt: list of arguments
 * @x: integer variable
 *
 * Return: x as integer variable
 */

int con_spc(const char *format, va_list pnt, int x)
{
	int w;

	while (*format)
	{
		w = (unsigned char)*format++;

		if (w != '%')
		{
			putchar_c(w);
			x++;
		}
		else
		{
			w = (unsigned char)*format++;

			if (list_p[w] == NULL)
			{
				if (w == '\0')
					break;
				putchar_c(w);
				x++;
			}
			else
				return (dispatch[c](format, pnt, x));
		}
	}
	return (x);
}
