# Week 7 Practical
This repository contains two C programs for Week 7 practical exercises: `finde.c` and `pointers.c`. The programs demonstrate the use of dynamic memory allocation, pointers, and recursion in C.

## Files Included:
`finde.c` - A program that approximates the mathematical constant `e` using a series expansion up to a user-specified order. The program dynamically allocates memory for the terms in the expansion, calculates each term using a factorial function, and then sums the terms to estimate `e`.
`pointers.c` - A program that uses pointers to dynamically allocate, modify, and free an integer array. The program creates an array of integers, fills it with ones, prints the values, and then frees the allocated memory.

## Program Details:
### `finde.c`
- Prompts the user to enter an integer representing the order of the approximation.
- Allocates memory for the terms in the `e` approximation series.
- Calculates each term as \( \frac{1}{(i+1)!} \) and sums them to approximate `e`.
- Outputs each term, the final estimate for `e`, and the difference from the true value of `e`.
- Frees allocated memory after the calculation.<br/>

### `pointers.c`
- Allocates memory for an integer array of a specified size (5 in this case).
- Fills the array with ones and prints each value.
- Frees the memory after printing to ensure efficient memory management.

## To Run:
```bash
gcc finde.c -o finde -lm
./finde

gcc pointers.c -o pointers
./pointers
```