#include "main.h"

/**
 * printf_exclusive_string - Entry point
 * Description: print exclusuives string
 * @arg_list: argument
 * Return: the length of the string.
 */

int printf_exclusive_string(va_list arg_list)
{
	char *s;
	int i, len = 0;
	int temp_value;

	s = va_arg(arg_list, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			temp_value = s[i];
			if (temp_value < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + printf_HEX_helper(temp_value);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}
