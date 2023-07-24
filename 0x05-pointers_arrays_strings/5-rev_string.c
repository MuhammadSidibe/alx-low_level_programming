#include "main.h"

/***
 * rev_string - Reverses a string
 * @s: input string
 *
 * This function takes an input string 's' and reverses it in place,
 * meaning it modifies the original string without using additional memory.
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
	_putchar('\n');
}
