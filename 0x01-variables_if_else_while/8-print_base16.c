#include <stdio.h>

/**
*main - print alphabet
*Return: 0(success)
*/
int main(void)
{
	char n;

for (n = '0' ; n < '10' ; n++)
	putchar(n);
for (n = 'a' ; n < 'g' ; n++)
	putchar(n);
putchar('\n');
return (0);
}
