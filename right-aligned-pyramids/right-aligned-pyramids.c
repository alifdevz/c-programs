#include <stdio.h>

int main(void)
{
    // First pyramid
    int n = 5;
    for (int i = 0; i < 5; i++)
    {
        for (int j = n; j > 1; j--)
        {
            printf(" ");
        }
        n--;

        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    printf("\n");

    // Second pyramid
    int x = 5;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = x; j > 1; j--)
        {
            printf(".");
        }
        x--;

        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}