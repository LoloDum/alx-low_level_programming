#include <stdio.h>

/**
 * main - Prints the alphabet in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
		char low;

		for (low = 'a'; low <= 'z'; low++)
			putchar(low);
		return (1);
}