#ifndef _main_h
#define _main_h

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

typedef int (*dispatch_f)(const char *format, va_list pnt, int x);

static dispatch_f const dispatch[256] = {

	['c'] = conv_char,
	['s'] = conv_str,
	['%'] = conv_perc,
	['d'] = conv_int,
	['i'] = conv_int,
	['b'] = conv_bin,
	['r'] = conv_rev,
	['R'] = conv_rot,
	['u'] = unsign_int,
	['o'] = conv_oct,
	['x'] = conv_hex,
	['X'] = conv_HEX,
	[NULL] =  NULL
};

int _printf(const char *format, ...);
int conv_spc(const char *format, va_list pnt, int);
int conv_char(const char *format, va_list pnt, int);
int conv_str(const char *format, va_list pnt, int);
int conv_int(const char *format, va_list pnt, int);
int conv_bin(const char *format, va_list pnt, int);
int conv_rev(const char *format, va_list pnt, int);
int conv_rot(const char *format, va_list pnt, int);
int unsign_int(const char *format, va_list pnt, int);
int conv_oct(const char *format, va_list pnt, int);
int conv_hex(const char *format, va_list pnt, int);
int conv_HEX(const char *format, va_list pnt, int);
int putchar_c(int);
int _printf(const char *format, ...);
int con_spc(const char *format, va_list pnt, int x);
int print_num(unsigned long long, unsigned int, const char *);
char *rev_str(char *);

#endif /* _main_h */

