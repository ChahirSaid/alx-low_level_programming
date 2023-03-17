#include <stdio.h>

/**
 * main - Entry point
 * Description: a C programme that prints the alphabet in lowercase
 *              folowed by uppercase using the putchar function only.
 *              a for loop to iterate through the lowercase letters
 *              from 'a' to 'z' and print them one by one using putchar.
 *              a for loop to iterate through the uppercase letters
 *              from 'A' to 'Z' and print them one by one using putchar.
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
