#include "main.h"
/**
 * isupper - checks for upper character
 *@c: character to be tested
 *
 * Return: 1 on success, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
