#include <stdio.h>

/**
 * main - Entry point
 * Description: a C programme that prints the alphabet in lowercase
 *              in reverse using the putchar function only.
 *              a for loop to iterate through the lowercase letters
 *              from 'z' to 'a' and print them one by one using putchar.
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
