#include "main.h"

/**
 * printf_rot13 - Entry point
 * Description: printf str to ROT13 place into buffer
 * @arg_list: arguments
 * Return: counter
 *
 */
int printf_rot13(va_list arg_list)
{
	int i, j, counter = 0;
	int k = 0;
	char *s = va_arg(arg_list, char*);
	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; a[j] && !k; j++)
		{
			if (s[i] == a[j])
			{
				_putchar(b[j]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			counter++;
		}
	}
	return (counter);
}
