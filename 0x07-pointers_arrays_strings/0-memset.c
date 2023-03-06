#include "main.h"

/**
 * _memset - Entry point
 * @s: pointer to put the constant
 * @b: constant byte
 * @n: bytes
 * Return: Nothing
 */

void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i %10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}
