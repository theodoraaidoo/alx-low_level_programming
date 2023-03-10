#include "main.h"
 /**
  * _strcat - Concatenates two strings.
  * @dest: A pointer to the destination string.
  * @src: A pointer to the source string.
  * Return: A pointer to the resulting concatenated string.
*/
char *_strcat(char *dest, char *src);

{
	int i;
	int j;


	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}


	dest[i] = '\0';
	return (dest);
}
