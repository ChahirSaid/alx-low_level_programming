#include "main.h"
/**
 * main - Entry point
 *      prints the number of argument.
 * @argc: the number of argument.
 * @argv: the array of argumen.
 * Return: 0(success).
 */

int main(int argc, char const *argv[])
{
	int i;

	i = -1;
	while (i++ < argc - 1)
		printf("%s\n", argv[i]);
	return (0);
}
