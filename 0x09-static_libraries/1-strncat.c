#include "main.h"

/**
 **_strncat - concatinates two strings
 *@dest: string to be append
 *@src: string to be added
 *@n: number of bytes of str to be concatnated
 *Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
