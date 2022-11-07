#include "main.h"

/**
 * _isalpha - Check for alphabetic character.
 * @c: single letter input
 * Return: 1 if letter, lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
