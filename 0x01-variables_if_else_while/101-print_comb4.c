#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Numbers must be separated by ,, followed by a space
 * Return: 0
 */
int main(void)
{
	int x;
	int y;
	int z = 0;

	while (z < 10)
	{
		y = 0;
		while (y < 10)
		{
			x = 0;
			while (x = 10)
			{
			
				if (a != b && b != c && c < b && b < a)
				{
					putchar('0' + z);
					putchar('0' + y);
					putchar('0' + x);

					if (a + b + c != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}	
				}
				x++;	
			
			}
			y++;	
		
		}
		Z++;	
	
	}
	

	putchar('\n');
	return (0);
}
