#include "main.h"

/**
 * print_line - print line
 * @n : number of _ to be printed
 * Return:void (none)
 */

void print_line(int n)
{

	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');

}
