#include <stdio.h>
#include <unistd.h>

int main(void)
{
    for (int i = 1; ; i *= 2)
    {
        // print integer number until it overflows (passes its limit of 32 bits)
        printf("%i\n", i);
        sleep(1);
    }
}