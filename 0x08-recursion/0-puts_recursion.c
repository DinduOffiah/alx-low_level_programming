#include "main.h"
/**
 * _puts_recursion - Prints "puts with recursion" as string.
 */

void _puts_recursion(char *s)
{
        if(*s)
        {
                _putchar(*s);
                _puts_recursion(s + 1);
        }

        else 
                _putchar('\n');
}
