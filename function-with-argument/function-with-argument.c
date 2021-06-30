#include <stdio.h>

// Prototype
void printHelloWorld(int n);

int main(void)
{
    // Print Hello, world! ten times
    printHelloWorld(10);
}

void printHelloWorld(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Hello, world!\n");
    }
}