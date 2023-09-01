#include "main.h"
#include <string.h>
/**
 * *_memcpy - a function that copies memory area
 * @dest: it will start above 50
 * @src: buffer2
 * @n:value
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
