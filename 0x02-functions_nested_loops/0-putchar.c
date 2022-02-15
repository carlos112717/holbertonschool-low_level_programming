/**
 * @file 0-putchar.c
 * @author Carlos A. Cortes
 * @brief Algorithm to print a message in a specific language
 * @version 0.1
 * @date 2022-02-14
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <main.h>

/**
 * main -  function is the entry point of the program
 *
 * Returns: 0 if the program ends successfully
 */
int main(void)
{
char *message = "_putchar";
_putchar(message);
_putchar('\n');
return (0);
}
