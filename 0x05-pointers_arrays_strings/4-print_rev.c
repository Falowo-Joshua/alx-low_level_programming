#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: string to reverse
 * Description: prints string in reverse to stdout
 * Return: nothing
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
