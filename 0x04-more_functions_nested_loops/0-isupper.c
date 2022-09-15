#include "main.h"
#include <stdio.h>

/**
 * int _isupper - check the code.
 * @c: the xharacter to be checked
 * Return: 0 if the c is lowercase and returns 1 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (0);
}
