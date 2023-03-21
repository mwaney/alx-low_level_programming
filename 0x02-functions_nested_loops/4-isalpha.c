#include "main.h"

/**
 * _islower - function that tests if an alphabet is lowercase
 * @c: The character to test for lowercase
 * Return: 1 if character is alphabet and 0 if otherwise
 */

int _islower(int c)
{
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
                return (1);
        }
        else
        {
                return (0);
        }

}
