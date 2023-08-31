#include "main.h"


/**
 * factorial - a function that returns the factorial of a given number
 * @n: pointer to string params
 * Return: return -1,1 and result
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
