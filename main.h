#ifndef _main_h
#define _main_h

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct dispatch_t - function dispatch
 * @op: operator
 * @f: function
 */

typedef struct dispatch_t
{
	char *op;
	int (*f)(va_list);
} dispatch;

int _printf(const char *format, ...);
int con_spc(const char *format, dispatch func[], va_list pnt);
int putchar_c(char);
int conv_char(va_list);
int conv_str(va_list);
int conv_perc(va_list);
int conv_int(va_list);
int print_no(va_list);
int conv_bin(va_list);
int conv_rev(va_list);
int conv_rot(va_list);
int unsign_int(va_list);
int conv_oct(va_list);
int conv_hex(va_list);
int conv_HEX(va_list);


unsigned int print_num(unsigned int, int);
char *rev_str(char *);
void putchar_n(char *);
int print_unsign(unsigned int);

#endif /* _main_h */
