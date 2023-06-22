#include "main.h"

/**
 * print_alphabet_x10 - function that will print alphabet 10 times
 *
*/

void  print_alphabet(void)
{
	int l, ch;

	for (l = 0; l <= 9; l++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
