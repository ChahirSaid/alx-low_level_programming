#include "main.h"

/**
 * main - Entry point
 *
 * Description: a program that prints _putchar,
 *		followed by a new line using nested loops.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;
	char str[] = "_putchar";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j <= i; j++)
		{
			putchar(str[j]);
		}
	}
	putchar('\n');
	return (0);
}

