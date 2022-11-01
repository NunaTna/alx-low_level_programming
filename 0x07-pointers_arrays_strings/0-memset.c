#include "main.h"

/**
 * _memset - Fills the first n byte of memory area
 * @s: Memory area
 * @c: Character
 * @n: Number of bytes
 * Return: n
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		  memory[index] = value;

	return (memory);
}
