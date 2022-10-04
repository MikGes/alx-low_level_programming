#include "main.h"
#include <stdio.h>
/**
 * *_strpbrk -  gets the length of a prefix substring.
 * @s:string to search
 * @accept: string of characters to look for
 * Return: the pointer in bytes in s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}
	return (NULL);
}
