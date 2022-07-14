#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @str: The string to get the length of
 *
 * Return: length of the @str
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}
