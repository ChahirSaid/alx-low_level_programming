#include "main.h"

/**
  * _strcpy - copys str to another
  *
  * @dest: string destination
  * @src: the str that's gonna be copied
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
