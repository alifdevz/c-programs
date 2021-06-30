#include <stdio.h>

void printHelloWorld()
{
    printf("Hello, world!\n");
}

int main(void)
{
    // print Hello, world! five times
    for (int i = 0; i < 5; i++)
    {
        printHelloWorld();
    }
}