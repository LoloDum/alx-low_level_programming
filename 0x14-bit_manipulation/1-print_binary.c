#include "main.h"

/**
 * print_binary - Entry Point
 * @n: dec input
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	int i = 0, count, a, tmp;

	if (n == 0)
	{
		printf("0");
		return;
	}

	tmp = n;

	while (tmp != 0)
	{
		i++;
		tmp = tmp >> 1;
	}

	for (count = i - 1; count >= 0; count--)
	{
		a = n >> count;
		if (a & 1)
			printf("1");
		else
			printf("0");
	}
}
