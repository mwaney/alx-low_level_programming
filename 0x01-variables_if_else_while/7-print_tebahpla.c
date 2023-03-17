#include <stdio.h>
/** 
 * main : Entry point
 *
 * Return: Always 0 (Success)
 */

int main()
{
    char c;

    for (c = 'z'; c >= 'a'; c--)
    {
        putchar(c);
    }
    putchar('\n');

    return (0);
}

