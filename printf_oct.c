#include "main.h"

/**
 * printf_oct - Entry point
 * Description: convert integer to an octal number
 * @arg_list: arguments
 * Return: counter
 */

int printf_oct(va_list arg_list)
{
	int x, counter = 0;
	int *array;
	unsigned int num = va_arg(arg_list, unsigned int);
	unsigned int temp_num = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));
	for (x = 0; x < counter; x++)
	{
		array[x] = temp_num % 8;
		temp_num /= 8;
	}
	for (x = counter - 1; x >= 0; x--)
		_putchar(array[x] + '0');
	free(array);
	return (counter);
}
