#include "main.h"
#include <string.h>

/**
 * _strncpy - a function that copies a string.
 * @dest: first param
 * @src: second param
 * @n: third param
 * Return: return strncpy(dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
