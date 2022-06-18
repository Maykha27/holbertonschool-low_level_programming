#include "main.h"
/**
  * _memcpy - copy memory
  * @dest: dest momery
  * @src: source memory area
  * @n: bytes
  * Return: memory eare
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

for (a = 0; a <  n; a++)
{
dest[a] = src[a];
}
return (dest);
}
