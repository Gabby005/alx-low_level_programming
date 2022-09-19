#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers\n
 * @a: int type array pointer
 * @n: int type integer
 * Description: Numbers must be separated by comma and space.
 * The numbers should be displayed in the same order as they are stored in the array
 * You can only use _putchar to print
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int i;


	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
