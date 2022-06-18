#include "main.h"

/**
  *_memset - the fonction
  *@s: memory area to fill
  *@b: constant
  *@n: bytes of memory
  *Return: thr memory
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
