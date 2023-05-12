#include "main.h"
/**
 * _strncpy - copies a string
 * Description: function that copies a string.
 * @dest: string value
 * @src: string value
 * @n: interger
 * Return: nothing
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}
