#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * Description: function that encodes a string using rot13.
 * @str: string value
 * Return: returns pointer
 *
*/
char *rot13(char *str)
{
int i;
int k;
char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; str[i] != '\0'; i++)
{
for (k = 0; k < 52; k++)
{
if (str[i] == data1[k])
{
str[i] = datarot[k];
break;
}
}
}
return (str);
}
