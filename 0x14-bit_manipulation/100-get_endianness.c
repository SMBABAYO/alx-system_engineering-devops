#include "main.h"
/**
* get_endianness - check the system byte
* Return: 0 or 1
*/
int get_endianness(void)
{
	int x = 1;
	int little_or_big;

	little_or_big = (int) (((char *)&x)[0]);
	return (little_or_big);
}
