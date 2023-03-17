#include <stdio.h>

/**
 * main - Entry point
 * Description: a C programme that prints all single digits
 *              numbers of base 10 starting from 0.
 *              a for loop to iterate through the numbers
 *              from '0' to '9' and print them one by one using putchar.
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}

