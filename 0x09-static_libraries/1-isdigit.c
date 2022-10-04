#include "main.h"
#include<stdio.h>
/**
 * _isdigit - checkes if a given input is a digit or not
 * @c: the input to be checked
 * Return: 1 if c is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
