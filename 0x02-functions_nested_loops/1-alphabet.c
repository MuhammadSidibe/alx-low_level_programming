#include "main.h"
#include <stdio.h>

/**
 * Print_alphabet - Prints the alpha in lowercase
 */
void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
		_putchar(la);

	_putchar('\n');
}
