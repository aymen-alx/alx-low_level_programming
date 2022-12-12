#include "main.h"
/**
*_strchr - fills memory with a constant byte.
* @s: pointer to put the constant
* @c: constant
* Return: Null
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return (0);
}
