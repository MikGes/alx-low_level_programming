#include "main.h"
/**
 * puts2 - prints a string but in a special format
 * @str: string to be printed
 */
void puts2(char *str)
{
	int i, len;

	len = 0;
	while (str[len] != '\0')
		len++;
	for (i = 0; i < len; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
