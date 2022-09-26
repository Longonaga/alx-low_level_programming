<<<<<<< HEAD
#include "main.h"
/**
* rev_string - reverses a string
* @s: the string to be modified
*
* Return: void
*/
void rev_string(char *s)
{
int i, c, k;
char *a, aux;
a = s;

while (s[c] != '\0')
{
c++;
}
for (k = 1; k < c; k++)
{
a++;
}
for (i = 0; i < (c / 2); c++)
{
aux = s[i];
s[i] = *a;
*a = aux;
a--;
}
=======
#include <stdio.h>
#include "main.h"

/**
* puts2 - prints every other character
* @str: string
*
* Return: return nothing
*/

void puts2(char *s)
{
int i = 0;
while (*(str + i) != '\0') 
{
if (i % 2 == 0)
putchar(*(str + i));
i++; }
putchar(10);
>>>>>>> 30f43e75322a279d1c9115531c440ac0e04ea096
}
