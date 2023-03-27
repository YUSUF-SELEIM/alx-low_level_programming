#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string to print
 */
void puts_half(char *str)
{
	if (strlen(str) % 2 != 0)
	{
		int i;
		int len;

		len = (int)(strlen(str) - 1) / 2;

		for (i = 0 ; i < len ; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	} else
	{
		int i;
		int len;

		len = (int)(strlen(str) / 2);

		for (i = 0 ; i < len ; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
