#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string to print
 */
void rev_string(char *s)
{
	char tmp;
	int i, len1, len;

	len = strlen(s);
	len1 = 0;

	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len1];
		s[len1--] = tmp;
	}
}
