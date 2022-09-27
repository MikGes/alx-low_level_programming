#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of two diagonals
 * @a:a square matrix
 * @size: size of a ,atrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;
	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + 1];
		sum1 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d,%d\n", sum, sum1);
}
