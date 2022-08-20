#include "main.h"
#include <stdio.h>

/**
 * get_endianness - Entry Point
 * Return: 0
 */
get_endianness(void)
{
	unsigned int i;
	char *c;

	i = 1;
	c = (char *) &i;

	return ((int)*c);
}
