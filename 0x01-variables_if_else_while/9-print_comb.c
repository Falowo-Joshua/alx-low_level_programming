#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: program that prints all possible
 * combinations of single-digit n
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num % 10 + '0');

		if (num != 9)
		}
			putchar(',');

			putchar(' ');

		putchar('\n');
		return (0);
}
