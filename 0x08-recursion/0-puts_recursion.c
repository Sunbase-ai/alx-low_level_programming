#include <stdio.h>
#include <stdlib.h>
#include "main.h"

//----------------------------------------------------------------function for printing----------------------------------------------------------------



void _puts_recursion(char *s){
    if (*s) {_putchar(*s);
    _puts_recursion(s+1);
    }
    else {_putchar('\n');}
}
