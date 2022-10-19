#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times
 */
void main(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}
