#include <stdio.h>

int main()
{
    int integer1 = 10;
    int integer2 = 200;
    float float1 = 1.11;
    float float2 = 2.2222;

    // ".2f" here means 2 decimal places and ".4f" means 2 decimal places.
    printf("Two integers are %d and %d and two floats are %.2f and %.4f\n", integer1, integer2, float1, float2);

    return 0;
}