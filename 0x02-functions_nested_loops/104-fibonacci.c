#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers
 *		starting with 1 and 2 followed by a new line
 *
 * Return: Always 0 (Succes)
*/

int main(void)
{
	unsigned long int a = 1, b = 2, c, i;

	printf("%lu, %lu", a, b);

	for (i = 0; i < 96; i++)
	{
		c = a + b;
		printf(", %lu", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
