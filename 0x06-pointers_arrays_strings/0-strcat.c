#include "main.h"
 /**
  * _strcat - concatenates two strings.
  * @dest: the string @src is added to
  * @src: the string to be appended
  * Return: pointer to the resulting string @dest
  */
char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\n')
	{
		count++;
	}

	while (count2 >= 0)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\n')
			break;
		count++;
		count2++;
	}
	return (dest);
}
