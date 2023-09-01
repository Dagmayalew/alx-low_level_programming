#include "main.h"
#include <string.h>
/**
 * *_memset - a function that fills memory with a constant byte
 * @s: pointer
 * @n: value
 * @b: constant byte
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
return (s);
}
