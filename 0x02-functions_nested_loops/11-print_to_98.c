#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - it print natural numbers
 * @n: int n
 * Return: from n to 98
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			if (i == 98)
			{
				printf("%d\n", i);
			} else
			{
				printf("%d, ", i);
			}
		}
	} else if (n == 98)
	{
		printf("%d\n", 98);
	} else
	{	int i;

		for (i = n ; i >= 98 ; i--)
		{
			if (i == 98)
			{
				printf("%d\n", i);
			} else
			{
				printf("%d, ", i);
			}
		}
	}
}
