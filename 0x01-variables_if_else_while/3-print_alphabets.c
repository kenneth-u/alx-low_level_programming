#include <stdio.h>

/**
 *main - Entry point
 *
 *  alphabet in lowercas eand uppercase, followed by a new line
 *  Return: 0 (Success)
 */
int main(void)
{
	char i;
	char x;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');

	return (0);
}
