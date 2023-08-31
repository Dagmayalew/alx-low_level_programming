#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string
 * @s: character
 * Return: return length
 */
int _strlen_recursion(char *s)
{
int count = 0;

		while (*s != '\0')
			{
					count++;
					s++;
			}
return (count);

}
