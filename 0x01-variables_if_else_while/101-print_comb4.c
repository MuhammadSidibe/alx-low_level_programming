#include<stdio.h>

/**
 * main - Prints all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, l;

	for (n = 48; n <= 55; n++)
	{
		for (m = n + 1; m <= 56; m++)
		{
			for (l = m + 1; l <= 57; l++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
