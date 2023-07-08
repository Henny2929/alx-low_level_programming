#include "main.h"

/**
 * _strspn - gets the lengthof a prefix substring
 * @s: the tring to be searched
 * @accept: the prefix to be measure
 *
 * Return: the number of bytes in a s which
 * consists only of bytes from accepts
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
