#include "function_pointers.h"
/**
 * int_index - returns the index of the number
 * @array:the array to be searched on
 * @size: the size of the array
 * @cmp: a funtion that compares two values
 * Return: the indext of the numebr
 */
int int_index(int *array, int size, int (*cmp)(int d))
{
	int i;

	if (array && cmp)
	{
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i] != 0))
			return (i);
	}
	}
	return (-1);
}
