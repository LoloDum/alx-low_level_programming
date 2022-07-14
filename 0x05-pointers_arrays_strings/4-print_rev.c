#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: string to be printed in reverse 
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (len)
	{
		_putchar(s[--length]);
	}
	-putchar('\n');
}
