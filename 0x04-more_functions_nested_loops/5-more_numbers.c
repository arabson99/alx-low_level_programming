#include "main.h"

/**
 * more_numbers - print numbers to 14
 *
 * Return: void
 */
void more_numbwers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar(10);
	}
}
