#include "main.h"
/**
 * _strcat - concatenate two strings but add inputted number of bytes
 * @dest: string to br appended upon
 * @src:  string to be completed at the end of dest
 * @n: integer parameter to compare index to
 *
 * Return: return new concatenated string
 */

char *_strncat(char *dest, char *src, int n);
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
