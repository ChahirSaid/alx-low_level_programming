#include "main.h"
/**
  * _isupper - checkes for uppercase character
  *
  * @c: the character
  *
  * Return: 1 if there is an uppercase or 0 if not
  */

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
