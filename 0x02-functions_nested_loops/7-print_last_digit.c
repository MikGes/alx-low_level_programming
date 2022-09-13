#include "main.h"

/**
*print_last_digit - computet the absolute
*@n: the number to be checked
*Return: the absolute value
*/
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;
	if (a < 0)
		a = -a;

	_putchar(a + '0');
	return (a);
}

