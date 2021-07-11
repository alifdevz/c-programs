#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}