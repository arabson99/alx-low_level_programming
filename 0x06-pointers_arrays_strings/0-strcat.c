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
	int a = 0, b = 0;

	while (dest[a++])
		b++;

	for (a = 0; src[a]; a++)
	{
		dest[b++] = src[a];
	}

	return (dest);
}
