#include "main.h"
/**
 * is_prime_number - checkes if a numebr is prime or not
 * @n: numebr to be evaluated
 * Return: 0 if the number is not prime and 1 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	return (prime(n, n - 1));
}
/**
 * prime - checkes if a number is prime
 * @n:number to evaluate
 * @i:itterator
 * Return: 0 if not prime and 1 if it is
 */
int prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime(n, i  - 1));
}
