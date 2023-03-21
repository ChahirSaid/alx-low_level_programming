#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the first 98 Fibonacci numbers
 *		starting with 1 and 2 followed by a new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int a = 1, b = 2, next, i;

	printf("%d, %d, ", a, b);
	for (i = 3; i <= 98; ++i)
	{
		next = a + b;
		printf("%d", next);
		if (i != 98)
		{
			printf(", ");
		}
		a = b;
		b = next;
	}
	printf("\n");
	return (0);
}
