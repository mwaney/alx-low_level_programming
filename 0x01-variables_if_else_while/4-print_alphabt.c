#include <stdio.h>

int main() {
    char c;

    for (c = 'a'; c <= 'z'; c++)
    {
	    if (c == 'e' || c == 'q')
	    {
		    continue;
	    }
	    putchar(c);

    }
    putchar('\n');

    return 0;
}
