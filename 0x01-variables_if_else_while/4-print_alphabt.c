#include <stdio.h>

/**
 *main - Entry point
 *
 *  alphabet in lowercase except e and q, followed by a new line
 *  Return: 0 (Success)
 */
int main(void)
{
	char i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if ((i != 'e') && (i != 'q'))
		{
			putchar(i);
		}
	}
	putchar('\n');

	return (0);
}
