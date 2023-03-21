#include"main.h"

/**
 * times_table - prints the 9 times table
 *
 * ./9-times_table | cat -e will print the following:
 * 0, 0, 0, 0, ...
 * 0, 1, 2, 3, ...
 * 0, 2, 4, 8, ...
 *
*/

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; ++num)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; ++mult)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);

			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}
