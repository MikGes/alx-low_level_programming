#include "main.h"
int squareroot(int n, int i);

/*
 * _sqrt_recursion - computes the square root of a number
 * @n: numebr to calculate the square root
 * Return: the square root value
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (squareroot(n, 0));
}
/**
 * squareroot - computes the square root
 * @n : the numebr
 * @i: the itterator
 * Return:the values  of i
 */
int squareroot(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (squareroot(n, i + 1));
}
