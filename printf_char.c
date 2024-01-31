#include "main.h"

/**
 * printf_char - Entry point
 * Description: prints a char
 * @arg_list: arguments
 * Return: 1.
 */

int printf_char(va_list arg_list)
{
	char str;

	str = va_arg(arg_list, int);
	_putchar(str);
	return (1);
}
