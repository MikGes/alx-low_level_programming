#include <stdio.h>
/**
 * main - prints the name of the program
 * @argc: the numebr of the command line arguments
 * @argv: an array of string
 * Return: 0(SUCCESS)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
