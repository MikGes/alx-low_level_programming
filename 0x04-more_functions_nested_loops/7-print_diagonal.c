#include "main.h"

/**
 * print_diagonal - prints diagonal for n times
 * @n: the number of times the diagonal to be printed
 * Return: prints diagonal lines
 */
void print_diagonal(int n)
{
if (n == 0 || n < 0)
{
	_putchar('\n');
	break;
}
else
{
	for (int i = 0; i < n; i++)
	{
		else if (i == 0)
		{
			_putchar('\\');
		}
		else
		{
			int j;

			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
				_putchar('\\');
			}
			_putchar('\n');
		}
	}
}
}
