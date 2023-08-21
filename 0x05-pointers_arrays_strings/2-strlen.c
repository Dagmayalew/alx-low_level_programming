#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: character
 * Return: 1 always
 */
int _strlen(char *s)
{

	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);
}
