#include<stdio.h>

int main(){
    int n = 5, p = 3, q = 4;
    double A[n][p], B[p][q], C[n][p];

    // Declaring the loop indices
    int iLoop, jLoop, kLoop;

    // For matrix A
    for(iLoop = 0; iLoop < n; iLoop++)
        for(jLoop = 0; jLoop < p; jLoop++)
            A[iLoop][jLoop] = iLoop + jLoop;

    // For matrix B
    for(iLoop = 0; iLoop < p; iLoop++)
        for(jLoop = 0; jLoop < q; jLoop++)
            B[iLoop][jLoop] = iLoop - jLoop;

    // For matrix C
    for(iLoop = 0; iLoop < n; iLoop++)
        for(jLoop = 0; jLoop < q; jLoop++)
            C[iLoop][jLoop]  = 0.0;

    // Performing matrix multiplication
    for(iLoop = 0; iLoop < n; iLoop++)
        for(jLoop = 0; jLoop < q; jLoop++)
            for(kLoop = 0; kLoop < p; kLoop++)
                C[iLoop][jLoop] = C[iLoop][jLoop] + A[iLoop][kLoop] + B[kLoop][jLoop];

    // Printing out the results
    printf("The Matrix A:\n");
    for(iLoop = 0; iLoop < n; iLoop++)
    {
        for(jLoop = 0; jLoop < p; jLoop++)
        {
            printf("%3.0f\t", A[iLoop][jLoop]);
        }
        printf("\n");
    }

    printf("The Matrix B:\n");
    for(iLoop = 0; iLoop < p; iLoop++)
    {
        for(jLoop = 0; jLoop < q; jLoop++)
        {
            printf("%3.0f\t", B[iLoop][jLoop]);
        }
        printf("\n");
    }

    printf("The Matrix C:\n");
    for(iLoop = 0; iLoop < n; iLoop++)
    {
        for(jLoop = 0; jLoop < q; jLoop++)
        {
            printf("%3.0f\t", C[iLoop][jLoop]);
        }
        printf("\n");
    }
        
    

    return 0;
}