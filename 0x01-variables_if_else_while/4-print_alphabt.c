#include <stdio.h>
/**
 *main - Entry point
 *Description: declare and initialize the loop variable i to 'a', and iterate
 *		through all the lowercase letters up to 'z' using a for loop.
 *		check if the current letter is 'e' or 'q' using an if statement.
 *		If it is, we use the continue keyword to skip the current
 *		iteration and move on to the next letter.
 *		Otherwise, print the current letter using putchar
 *		folowed by a new line
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
	if (i == 'e' || i == 'q')
		continue;
	putchar(i);
	}

	putchar('\n');

	return (0);
}
