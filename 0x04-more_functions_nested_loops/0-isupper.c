#include "main.h"
/**
 * _isupper - checks if a character is upper or not
 * @c: character to be tested
 *
 * Return: 1 on success, 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	return (0);
}
