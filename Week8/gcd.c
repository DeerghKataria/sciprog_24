// This code is about finding the GCD of numbers
// This is a simple mathematical formula that we
// can implement by using Euclid's algoirthm through
// code. We will go through both the Iterative and
// Recursive approach.

#include<stdio.h>

int iterativeGCD(int a, int b)
{
    int temp;
    while(b!=0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int recursiveGCD(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    else
    {
        return recursiveGCD(b, a%b);
    }
}

int main()
{
    // Taking the error just in case if there's any error
    int number1, number2, error;

    printf("Enter Integer 1 and Integer 2: ");
    error = scanf("%d %d", &number1, &number2);

    if(error != 2)
    {
        printf("\nEnter two integers only!");
        return 1;       // Since, both the variables are not integers!
    }

    if(number1 <= 0 || number2 <= 0)
    {
        printf("\nOnly enter 2 Positive integers!");
    }

    // Now, finally printing the value of the GCD
    printf("\nIterative GCD(%d, %d): %d", number1, number2, iterativeGCD(number1, number2));
    printf("\nRecursive GCD(%d, %d): %d", number1, number2, recursiveGCD(number1, number2));

    return 0;
}

