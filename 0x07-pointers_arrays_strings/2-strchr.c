#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to check
 *
 *
 * Return: pointer to spot in s with c or null
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}
	return ('\0');
}
