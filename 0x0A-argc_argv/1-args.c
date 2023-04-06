#include "main.h"
/**
 * main - Entry point
 *      prints number of argument.
 * @argc: the number of argument.
 * @argv: the array of argument.
 * Return: 0 (Success).
 */

int main(int argc, char const *argv[])
{
	while (argv[argc])
		argc++;
	printf("%d\n", argc - 1);
	return (0);
}
