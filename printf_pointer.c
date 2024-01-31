#include "main.h"

/**
 * printf_pointer - Entry point
 * Description: prints pointer in an hexgecimal number
 * @arg_list: arguments
 * Return: counter
 */

int printf_pointer(va_list arg_list)
{
	void *p;
	char *s = "(nil)";
	int x, z;
	long int y;

	p = va_arg(arg_list, void*);
	if (p == NULL)
	{
		for (x = 0; s[x] != '\0'; x++)
			_putchar(s[x]);
		return (x);
	}

	y = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	z = printf_hex_helper(y);
	return (z + 2);
}
