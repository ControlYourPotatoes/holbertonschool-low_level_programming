#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenate two strings
 * @s1: the string 1
 * @s2: the string 2
 * @n: the number of characters to conc
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	size_t s1_length, s2_length, result_length;

	if (s1 == NULL) /* Treat NULL as an empty string */
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_length = strlen(s1);
	s2_length = strlen(s2);

	if (n >= s2_length)
		n = s2_length; /* Use the entire string s2 */

	result_length = s1_length + n;

	result = (char *)malloc((result_length + 1) * sizeof(char));

	if (result == NULL) /* Memory allocation failed */
		return (NULL);

	strncpy(result, s1, s1_length);
	strncpy(result + s1_length, s2, n);
	result[result_length] = '\0'; /* Null-terminate the resulting string */

	return (result);
}
