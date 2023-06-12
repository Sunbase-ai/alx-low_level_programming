#include "main.h"

/** _puts_recursion add a byte **/
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
