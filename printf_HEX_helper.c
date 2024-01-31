#include "main.h"

/**
 * printf_HEX_helper - Entry point
 * Description: convert integer to an hexdecimal number
 * @num: arguments
 * Return: counter
 */

int printf_HEX_helper(unsigned int num)
{
	int x, counter = 0;
	int *array;
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
			array[x] = array[x] + 7;
		_putchar(array[x] + '0');
	}
	free(array);
	return (counter);
}
