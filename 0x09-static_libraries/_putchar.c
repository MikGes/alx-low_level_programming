#include<unistd.h>

/**
*_putchar - print cahracters
*@c: The character to print
*Return: 1(success)
*on error, -1 is returned, and errno is set apropriately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
