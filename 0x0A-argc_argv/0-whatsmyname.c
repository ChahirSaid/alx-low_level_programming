#include <stdio.h>
/**
 * main - print its own namefollowed by a new line
 * @argc: count the number of argrument.
 * @argv: Pinter to the string of argument.
 * Return: 0 (Success).
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[0]);
	return (0);
}
