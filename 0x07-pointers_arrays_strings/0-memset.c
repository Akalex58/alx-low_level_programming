#include "main.h"
#include <stdio.h>

/**
 * _memset - function fills the n bytes of mem. area, pointed to by s const byte b
 * @s: referenced array
 * @b: char
 * @n: relax
 * Return: referenced array
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int  i;
	unsigned char *mem = s, value = c;

	for (i = 0; i < n; i++)
		mem[i] = value;

	return (mem);
}
