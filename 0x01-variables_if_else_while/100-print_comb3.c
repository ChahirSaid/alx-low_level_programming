#include <stdio.h>
/**
 * main - Entry point
 * Description: declare and initialize two loop variables
 *		i and j to iterate through all the possible
 *		pairs of digits from 0 to 9. The outer loop variable i starts
 *		at 0 and ends at 8 to avoid printing duplicate combinations.
 *		The inner loop variable j starts at i + 1 to avoid
 *		repeating the same pairs with reversed order
 *		print each pair of digits using putchar(i + '0') and putchar(j + '0').
 *		The expressions i + '0' and j + '0' convert the integer values of
 *		i and j to their corresponding ASCII codes
 * Return: Always 0 (success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
