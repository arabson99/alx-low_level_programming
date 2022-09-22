#include "main.h"
/**
 * leet - func that encode a string
 * @str: string that will be encoded
 *
 * Return: returns encoded string
 */
char *leet(char *str)
{
	int i, j;

	char *a = "aAeEoOtTlL";
	char *a = "aAeEoOtTlL";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
			}
		}
	}
	return (str);
}
