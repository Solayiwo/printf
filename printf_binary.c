#include "main.h"

/**
 * printf_bin - Entry point
 * Descrition: convert unsigned integers to binary number
 * @arg_list: arguments
 * Return: integer
 */

int printf_bin(va_list arg_list)
{
	int flag = 0;
	int count = 0;
	int x, y = 1, z;
	unsigned int num = va_arg(arg_list, unsigned int);
	unsigned int p;

	for (x = 0; x < 32; x++)
	{
		p = ((y << (31 - x)) & num);
		if (p >> (31 - x))
			flag = 1;
		if (flag)
		{
			z = p >> (31 - x);
			_putchar(z + '0');
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
