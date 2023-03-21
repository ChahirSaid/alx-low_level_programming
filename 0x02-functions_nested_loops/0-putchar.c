#include "main.h"

/**
 * main - Entry point
 *
 * Description: a program that prints _putchar,
 *		followed by a new line using nested loops.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;
	char str[] = "_putchar";

	for (ch = 0; ch < 8; ++ch)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
