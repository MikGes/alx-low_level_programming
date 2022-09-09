#include <stdio.h>

/**
*main - print alphabet
*Return: 0(success)
*/
int main(void)
{
	int i;
	int j;
for (i = 0 ; i <= 8 ; i++)
{
	for (j = 1 ; j <= 9 ; j++)
	{
		if (j > i && j != i)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i + j != 17)
			{
				putchar(',');
				putchar(' ');
			}
		}

	}
}
putchar('\n');
return (0);
}
