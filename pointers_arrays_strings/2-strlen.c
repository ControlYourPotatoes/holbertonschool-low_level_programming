#include <math.h>

/**
 * _strlen - the length of the string
 * s: the string
*/
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
