#include<stdio.h>
/**
 * main - print the sum of multiple of 3 and 5 up to 1024
 * Return:0(success)
 */
int main(void)
{
	int sum, i;

	sum = 0;
for (i = 3; i < 1024; i++)
{
	if (i % 5 == 0 || i % 3 == 0)
		sum = sum + i;
}
	putchar(sum + '0');
	putchar('\n');
	return (0);
}
