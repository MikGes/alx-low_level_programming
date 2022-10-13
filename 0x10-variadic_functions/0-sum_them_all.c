#include "variadic_functions.h"
#include<stdarg.h>
/**
 * sum_them_all - sums up each arguments passed
 * @n: the number of the arguments that will be passed
 * Return: the sum of all the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;

	if n == 0
		return (0);
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
