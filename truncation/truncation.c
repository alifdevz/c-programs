#include <stdio.h>

int main(void)
{
    int x = 2;
    int y = 5;
    float z = x / y; // The result will be truncated because x and y are both integer
    printf("z (truncated) = %f\n", z);

    z = x / (float) y; // The result will be correct because y is float. Either x or y or both must be float to get the correct answer
    printf("z (correct result) = %f\n", z);
}