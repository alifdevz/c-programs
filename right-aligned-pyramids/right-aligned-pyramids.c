#include <stdio.h>

int main(void)
{
    int n = 5;
    for (int i = 0; i < 5; i++)
    {
        for (int j = n; j > 1; j--)
        {
            printf(".");
        }
        n--;
    }
}