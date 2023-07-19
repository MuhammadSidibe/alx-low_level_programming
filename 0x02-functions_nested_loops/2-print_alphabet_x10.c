#include "main.h"

/**
 * Print_alphabet_x10 - Prints alpha 10 times
 */
void Print_alphabet_x10(void)
{
	int ten;
	char la;

	for (ten = 0; ten <= 9; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar('\n')
	}
}
