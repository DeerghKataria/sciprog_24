# Week 5 Practical
This repository contains two C programs for Week 5 practical exercises: `arctan.c` and `fib.c`. The programs demonstrate different numerical and sequence calculations.

## Files Included:
`arctan.c` - A program that approximates the inverse hyperbolic tangent function using a series expansion with a specified precision (`delta`). It compares this approximation to the actual `arctanh` function and displays the difference for values of `x` from -0.9 to 0.9.
`fib.c` - A program that generates the Fibonacci sequence up to a specified number of terms, displaying the sequence in rows of 10 values.

## To Run:
```bash
gcc arctan.c -o arctan -lm
./arctan

gcc fib.c -o fib
./fib
```