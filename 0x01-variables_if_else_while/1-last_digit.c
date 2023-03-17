#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: A C programme that generates a random number
 *		 print the last digit of the number
 *		 stored in the variable n
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit = n % 10;

	if (lastDigit > 5)
		printf("%d and is greater than 5\n", lastDigit);
	else if (lastDigit == 0)
		printf("%d and is 0\n", lastDigit);
	else
		printf("%d and is less than 6 and not 0\n", lastDigit);
	return (0);
}
