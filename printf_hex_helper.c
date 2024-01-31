#include "main.h"

/**
 * printf_hex_helper - Entry point
 * Description: convert integer to an hexdecimal number
 * @num: arguments
 * Return: counter
 */

int printf_hex_helper(unsigned long int num)
{
	long int x, counter = 0;
	long int *array;
	unsigned long int temp_num = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));
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
