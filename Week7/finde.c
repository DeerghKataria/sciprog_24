#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Declaring the functions
int factorial(int x);

int main()
{
    int i, order;      // take the order
    double e;
    double *terms;  // Dynamic memory allocation for the terms using pointer

    printf("Enter the order you wish to use: ");
    if (scanf("%d", &order)!= 1)
    {
        printf("Did not enter a number\n");
        return 1;
    }

    // malloc means memory allocation
    terms = (double *)malloc(order * sizeof(double));

    for(i = 0; i < order; i++)
    {
        terms[i] = 1.0/(double)factorial(i+1);
        printf("%.16lf\n", terms[i]);
    }

    e = 1.0;

    for(i = 0; i < order; i++)
    {
        e = e + terms[i];
    }

    // Good practice to free the memory allocated.
    free(terms);

    printf("e is estimated as %.10lf, with difference %e\n", e, e-exp(1.0));
    return 0;
}

int factorial(int x)
{
    if (x < 0)
    {
        printf("You must use a positive integer!");
        return -1;
    }

    else if(x == 0)
    {
        return 1;
    }

    else
    {
        return x * factorial(x-1);
    }
}