#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 * atoi is a function that converts a string into an int
 * @argc: Arguments
 * @argv: Array pointing to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
