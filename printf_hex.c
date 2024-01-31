#include "main.h"

/**
 * printf_hex - Entry point
 * Description: convert integer to an hexdecimal number
 * @arg_list: arguments
 * Return: counter
 */

int printf_hex(va_list arg_list)
{
	int x, counter = 0;
	int *array;
	unsigned int num = va_arg(arg_list, unsigned int);
	unsigned int temp_num = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));
	for (x = 0; x < counter; x++)
	{
		array[x] = temp_num % 16;
		temp_num /= 16;
	}
	for (x = counter - 1; x >= 0; x--)
	{
		if (array[x] > 9)
			array[x] = array[x] + 39;
		_putchar(array[x] + '0');
	}
	free(array);
	return (counter);
}
