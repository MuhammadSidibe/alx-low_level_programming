#include "main.h"
/**
 * binary_to_uint - a function that converts binary numbers
 * to integers/decimal numbers
 *
 * @b: a character pointer to string containing the
 * binary numbers
 *
 * Return: the converted integer/decimal (output)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
	size_t i = 0;
	unsigned int sum = 0;
	unsigned int pow = 1;

	if (b == NULL)
	return (0);

	for (len = 0; b[len] != '\0'; len++) ;

	for (i = len; i > 0; i--)
	{
	if (b[i-1] != '0' && b[i-1] != '1')
	return (0);

	if (b[i-1] == '1')
	sum += pow;
	pow *= 2;
	}

	return (sum);
}
