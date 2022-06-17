#include "main.h"
/**
  *_strncpy - Entry point
  *@dest: copy to
  *@src: copy from
  *@n: imput nomber of char
  *Return: Always 0
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		if (i < n)
			dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
