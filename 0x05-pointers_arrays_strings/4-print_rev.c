#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print-rev - prints a string in reverse
 * @s: pointer to the string to print
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s)-1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
