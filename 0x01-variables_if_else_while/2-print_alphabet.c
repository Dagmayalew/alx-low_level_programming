#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return:it returns the Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
