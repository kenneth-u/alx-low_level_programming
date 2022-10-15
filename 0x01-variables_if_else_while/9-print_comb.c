#include <stdio.h>

/**
 *main - Entry point
 *
 *  program that prints all possible combinations of single-digit numbers
 *  Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i == '9')
		{
			putchar('\n');
			return (0);
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
