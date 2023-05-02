#include "main.h"

/**
* *_strcpy - copiesthe string pointer to by src
* @dest: copy to
* @src: copy from
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
int z = -1;

do {
z++;
dest[z] = src[z];
} while (src[z] != '\0');

return (dest);
}
