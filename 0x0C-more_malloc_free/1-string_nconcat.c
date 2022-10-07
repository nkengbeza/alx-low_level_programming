#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings
 *
 * @s1: char pointer
 * @s2: char pointer
 * @n: unsigned int
 *
 * Return: char pounter
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b, i, j;
	char *str;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";

	a = b = 0;

	while (s1[a] != '\0')
		a++;
	while (s2[b] != '\0')
		b++;

	if (n >= b)
		n = b;

	str = (char *) malloc((a + n + 1) * sizeof(char));
	if (str == '\0')
		return ('\0');

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';

	return (str);
}
