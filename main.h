#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of specifiers
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} match;


int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list arg_list);
int printf_string(va_list arg_list);
int printf_37(void);
int _strlenc(const char *s);
int _strlen(char *s);
int printf_int(va_list arg_list);
int printf_dec(va_list arg_list);
int printf_bin(va_list arg_list);
int printf_oct(va_list arg_list);
int printf_unsigned(va_list arg_list);
int printf_HEX(va_list arg_list);
int printf_hex(va_list arg_list);
int printf_hex_helper(unsigned long int num);
int printf_HEX_helper(unsigned int num);
int printf_pointer(va_list arg_list);
int printf_exclusive_string(va_list arg_list);
int printf_srev(va_list arg_list);
int printf_rot13(va_list arg_list);


#endif
