#include "main.h"

/**
 * _isdigit - checks whether a character is adigit or not
 * @c: character to be tested
 *
 * Return: 1 on success, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
