#include <stdio.h>

// Prototype
void printHelloWorld();

int main(void)
{
    // Print Hello, world! five times
    for (int i = 0; i < 5; i++)
    {
        printHelloWorld();
    }
}

void printHelloWorld()
{
    printf("Hello, world!\n");
}