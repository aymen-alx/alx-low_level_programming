#include "main.h"

/**
* _strcpy - Copy paste string
* @dest: destination
* @src: source
*
* Return: destination
*/
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
