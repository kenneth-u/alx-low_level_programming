#include "main.h"

/**
*print_alphabet_x10 -this function print 10 times
*in lowercase, followed by new line
*
*/

void print_alphabet_x10(void);
{
	int ch, i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n')
	}
}
