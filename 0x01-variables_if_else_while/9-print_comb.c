#include <stdio.h>
/**
 * main - Entry point
 *Description : declare and initialize the loop variable i to 0, and iterate
 *		through all the single-digit numbers from 0 to 9 using a for loop.
 *		print each number as a character by adding
 *		the ASCII code of '0' to the current value of i.
 *		Since we're not allowed to use variables of type char,
 *		we add 48 instead of '0'.
 *		Then check if the current number is not equal to 9.
 *		If it's not, we print  ','
 *		followed by a space to separate it from the next number.
 *		After printing all the numbers, we print a newline.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + 48);

		if (i != 9)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');

	return (0);
}

