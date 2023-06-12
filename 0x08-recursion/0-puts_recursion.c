#include "main.h"

/**function for printing**/
/** @s: The pointer variable to string s**/

void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
{
_putchar('\n');
}
}
