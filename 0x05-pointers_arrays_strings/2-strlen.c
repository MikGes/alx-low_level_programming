#include "main.h"
/**
 *_strlen - swaps two integers
 *@s: character
 *Return: returns length of a string
 */
int _strlen(char *s)
{
	int i;

	i  = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
