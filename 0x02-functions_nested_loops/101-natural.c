#include <stdio.h>
/**
* main - function to sum multiples of 3 0r 5 in numbers
* Return: 0
*/
101-natural.c
int main(void)
{
	int sum = 0;
	int i;

	for (i = 0 ; i < 1024 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}

	printf("%d\n", sum);
}
