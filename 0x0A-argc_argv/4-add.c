#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of the program
 * @argc: the numebr of the command line arguments
 * @argv: an array of string
 * Return: 0(SUCCESS) or 1 when there is a failure
 */
int main(int argc, char *argv[])
{
	int sum, i, j, k, num;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (k = 1; k < argc; k++)
	{
		num = atol(argv[k]);
		if (num >= 0)
			sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
