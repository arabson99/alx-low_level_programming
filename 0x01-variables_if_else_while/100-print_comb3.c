#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;
	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 56; m++)
		{
			if (m > n)
			{
				putchar(n + 0);
				putchar(m + 0);
				if (n != 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
return (0);
}
