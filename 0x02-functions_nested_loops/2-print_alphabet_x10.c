#include "main.h"

/**
 * print_alphabet_x10 - entry point
 * Description: prints the alphabets in lower case ten times
 * Return: 0
 *
 **/

void print_alphabet_x10(void)
{
	char alphabet;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}

