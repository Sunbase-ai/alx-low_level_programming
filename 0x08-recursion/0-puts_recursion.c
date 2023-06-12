#include "main.h"


/** @s: The pointer variable to string s**/

void _puts_recursion(char *s)
{
/**add a byte **/
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
