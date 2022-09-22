#include "main.h"
/**
 * _strcat - concatenates the string pointed to by @src to
 * the end of the string poited to by @dest
 * @dest: String that will be appended
 * @src: String to be concatenated upon
 *
 * Return: returns pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b;

	while (dest[a])
		a++;

	for (b = 0; src[b] != 0; i++)
	{
		dest[a] = src[b];
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
