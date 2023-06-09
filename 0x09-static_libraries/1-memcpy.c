#include "main.h"
/**
 *_memcpy - Copies block of memory.
 *@dest: refers to stored memory
 *@src: ref where memory copied
 *@n: refers to number of bytes
 *Return: copied memory area src
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
