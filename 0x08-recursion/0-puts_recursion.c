#include <stdio.h>
#include <stdlib.h>
#include "main.h"

//----------------------------------------------------------------function for printing----------------------------------------------------------------



void _puts_recursion(char *s){
    if (*s) {putchar(*s);
    _puts_recursion(s+1);
    }
    else {putchar('\n');}
}

int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}