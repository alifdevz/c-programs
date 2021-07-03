#include <stdio.h>

int main(void)
{
    float x = 1;
    float y = 10;

    // float can only store 32 bits of information
    printf("%.50f\n", x / y);
}