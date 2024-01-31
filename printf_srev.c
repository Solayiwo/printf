#include "main.h"

/**
 * printf_srev - Entry point
 * Description: function that prints a str in reverse
 * @arg_list: arguments
 * Return: the string
 */

int printf_srev(va_list arg_list)
{

	char *s = va_arg(arg_list, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
