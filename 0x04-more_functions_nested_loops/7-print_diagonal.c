#include "main.h"

/**
* print_diagonal - prints diagonal using the '\' character
* @n: number times the '\' should be printed
* Return: void
*/

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 0 ; i < n ; i++)
		{
			for (j = 0; j <= i ; i++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}