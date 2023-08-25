#include "main.h"

/**
 * *_strcat -  a function that concatenates two strings
 * @*dest:character
 * @*src:character
 * Return: ret
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

    while (*dest) {
        dest++;
    }

    while (*src) {
        *dest++ = *src++;
    }

    *dest = '\0';

    return ret;
}


