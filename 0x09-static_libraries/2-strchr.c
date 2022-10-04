#include "main.h"
#include <stdio.h>
/**
 * *_strchr - copies memory area
 * @s:string to search
 * @c:char to find
 * Return: pointer to the result
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
			return (NULL);
	}
}
