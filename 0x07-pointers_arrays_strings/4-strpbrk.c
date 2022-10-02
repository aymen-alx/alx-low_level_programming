#include "main.h"

/**
* _strpbrk - Search a string for any of a set of bytes.
* @s: string
* @accept: string to match
* Return: Pointer
*/

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}

	return ('\0');
}
