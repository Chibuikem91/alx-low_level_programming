#include "main.h"

/**
 * main - prints 10 times the alpha's in lowercase and prints a new line
 */
void print_alphabet_x10(void);
{
	int ten;
	char la;

	for (ten = 0; ten <= 9; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar('\n');
	}
}
