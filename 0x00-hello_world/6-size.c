#include <stdio.h>

/**
  * main - Prints the size of  var types
  *
  * Return: Always 0 (Success) in the screen
  */
int main(void)
{
char o;
int p;
long int q;
long long int r;
float s;

printf("Size of a char: %d byte(s)\n", sizeof(o));
printf("Size of an int: %d byte(s)\n", sizeof(p));
printf("Size of a long int: %d byte(s)\n", sizeof(q));
printf("Size of a long long int: %d byte(s)\n", sizeof(r));
printf("Size of a float: %d byte(s)\n", sizeof(s));
return (0);
}
