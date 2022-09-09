#include <stdio.h>

/**
*main - print alphabet
*Return: 0(success)
*/
int main(void)
{
	char n;
	int k;

for (k = 0 ; k < 10 ; k++)
	putchar(k + '0');
for (n = 'a' ; n < 'g' ; n++)
	putchar(n);
putchar('\n');
return (0);
}
