#include "main.h"
/**
 * printf_string - Entry point
 * Description: print a string
 * @arg_list: arguments
 * Return: the length of the string
 */

int printf_string(va_list arg_list)
{
	char *str;
	int i, len;

	str = va_arg(arg_list, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
}
