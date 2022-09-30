#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: the numebr of the command line arguments
 * @argv: an array of string
 * Return: 0(SUCCESS)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
