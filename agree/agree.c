#include <stdio.h>

int main(void)
{
    char c = 'y'; // use single quotes for char data type
    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not agreed.\n");
    }
}