#include "main.h"
#include<stdio.h>

/**
 * positive_or_negative - checkes the sign of a number
 * @n: the number to be checked
 */
void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive", n);
	else if (n < 0)
		printf("%d is negative", n);
	else if (n == 0)
		printf("%d is zero", n);
}
