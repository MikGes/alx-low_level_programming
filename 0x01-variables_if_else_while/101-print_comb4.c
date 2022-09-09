#include <stdio.h>

/**
*main - print alphabet
*Return: 0(success)
*/
int main(void)
{
	int i;
	int j;
	int k;
for (i = 0 ; i <= 7 ; i++)
{
	for (j = 1 ; j <= 8 ; j++)
	{
		for (k = 2 ; k <= 9 ; k++)
		{
			if (k > j && j > i)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i + j + k != 24)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
