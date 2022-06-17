#include "main.h"
/**
  * _strncat - a fonction that copies a string
  * @dest: copy to
  * @src: copy from
  * @n: input of max
  * Return: void
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, x;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (x = 0; x < n; x++)
	{
		dest[i + x] = src[x];
		if (src[x] == '\0')
			x = n;
	}

	return (dest);
}
