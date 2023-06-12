#include "main.h"

/**
 * _puts_recursion - function that prints a reversed string,
 *  
 * @s: The pointer variable to string s
 */

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
