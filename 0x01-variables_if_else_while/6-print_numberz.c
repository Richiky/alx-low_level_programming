#include <stdio.h>


/**
 * main - program that prints the alphabet in lowercase and upper case
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	return (0);
}
