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
	/* Initialize the first two Fibonacci numbers*/
	int a = 1;
	int b = 2;

	/* Print the first two Fibonacci numbers*/
	printf("%d, %d, ", a, b);

	/* Compute and print the rest of the Fibonacci numbers*/
	for (int i = 2; i < 98; i++)
	{
		/* Compute the next Fibonacci number*/
		int c = a + b;

		/* Print the next Fibonacci number*/
		printf("%d, ", c);

		/* Update the values of a and b for the next iteration*/
		a = b;
		b = c;
	}

	/* Print a newline character at the end*/
	printf("\n");

	return (0);
}
