#include <stdio.h>

/**
 * main - Entry point
 * Description: a C programme that prints the alphabet in lowercase
 *		using the putchar function only.
 *		a for loop to iterate through the lowercase letters
 *		from 'a' to 'z' and print them one by one using putchar.
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		putchar(c);
	putchar('\n');
	return (0);
}
