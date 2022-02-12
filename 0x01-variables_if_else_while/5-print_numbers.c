/* Escribir los numeros de un solo digito a partir de 0 en base 10 */
#include <stdio.h>

/**
 * main - prints numbers from 0 to 9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char num[10];
int i;

for (i = 0; i < 10; i++)
{
num[i] = i + '0';
printf("%c\n", num[i]);
}
return (0);
}
