#include "main.h"
/**
 * _strcat - concatenate two strings but add inputted number of bytes
 * @dest: string to br appended upon
 * @src:  string to be completed at the end of dest
 * @n: integer parameter to compare index to
 *
 * Return: return new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, c;

	a = 0;
	c = 0;

	while (dest[a++])
	{
		c++;
	}

	for (a = 0; src[a] && a < n; a++)
	{
		dest[c++] = src[a];
	}
	return (dest);
}
