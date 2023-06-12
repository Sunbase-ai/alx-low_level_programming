#include "main.h"

/**
 * _puts_recursion - function that prints a reversed string,
 *  
 * @s: The pointer variable to string s
 */

void _puts_recursion(char *s)
{
if (*s)
{
_puts_recursion(s + 1);
_putchar(*s);
}
else
{
_putchar('\n');
}
}
