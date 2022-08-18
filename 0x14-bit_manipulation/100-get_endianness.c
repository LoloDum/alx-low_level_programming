#include "main.h"
#include <stdio.h>

/**
 * get_endianness - Entry Point
 * Return: 0
 */
get_endianness(void)
{
	unsigned int i;

	i = 1;
	if (*(char *)&i == 1)
		return (1);
	else
		return (0);
}
