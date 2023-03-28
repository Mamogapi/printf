#include "main.h"

/**
 * con_spc - search the for the specificier
 * @format: the string variable
 * @pnt: list of arguments
 * @func: function
 * Return: x as integer variable
 */

int con_spc(const char *format, dispatch func[], va_list pnt)
{
	int x, y, val, z = 0;

	for (x = 0; format[x] != '\0'; x++)
	{
		if  (format[x] == '%')
		{
			for (y = 0; func[y].op != NULL; y++)
			{
				if (format[x + 1] == func[y].op[0])
				{
					val = func[y].f(pnt);
					if (val == -1)
						return (-1);
					z += val;
					break;
				}
			}
			if (func[y].op == NULL && format[x + 1] != ' ')
			{
				if (format[x + 1] != '\0')
				{
					putchar_c(format[x]);
					putchar_c(format[x + 1]);
					z = z + 2;
				}
				else
					return (-1);
			}
			x++;
		}
		else
		{
			putchar_c(format[x]);
			z++;
		}
	}
	return (z);
}
