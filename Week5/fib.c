#include <stdio.h>
#include <stdlib.h>

void fib(int *a, int *b);

int main(void)
{
    int n;
    printf("Please enter a positive integer: \n");
    scanf("%d", &n);

    if(n < 1)
    {
        printf("The value of the integer must be bigger than 1\n");
        exit(1);
    }

    int f0 = 0;
    int f1 = 1;

    printf("The Fib series is: \n");
    printf("%d, %d", f0, f1);

    int iLoop;

    for(iLoop = 2; iLoop <=n; iLoop++)
    {
        fib(&f1, &f0);
        printf(", %d", f1);

        if((iLoop+1) % 10 == 0)
        {
            printf("\n");
        }
    }
    return 0;
}

void fib(int *a, int *b)
{
    int next;
    next = *a + *b;

    *b = *a;
    *a = next;
}