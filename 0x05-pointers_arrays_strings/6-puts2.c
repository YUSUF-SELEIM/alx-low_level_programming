#include "main.h"
#include <string.h>

/**
 * puts2 - reverses a string
 * @str: string to be reversed
 */
void puts2(char *str)
{
	int i;

	for (i = 0 ; i < (int)strlen(str) ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
