#include <stdio.h>

int main(void)
{
    int n = 5;

    int x = 5;
    for (int i = 0; i < n; i++)
    {
        // Print the right-aligned pyramid
        for (int j = x; j > 1; j--)
        {
            printf(" ");
        }
        x--;
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }

        // Separator
        printf("  ");

        // Print the left-aligned pyramid
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}