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
	int result;


	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int num1 = atol(argv[1]);
		int num2 = atol(argv[2]);


		printf("%d\n", num1 * num2);
	}
	return (0);
}
