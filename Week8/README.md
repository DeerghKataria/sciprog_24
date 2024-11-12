# Week 8 Practical
This repository contains two C programs for Week 7 practical exercises: `finde.c` and `pointers.c`. The programs demonstrate the use of dynamic memory allocation, pointers, and recursion in C.

## Files Included:
`gcd.c` - A program that calculates the GCD of two positive integers using Euclid's algorithm. The program provides both an iterative and a recursive approach to calculate the GCD.<br/>

## Program Details:
### `gcd.c`
- Prompts the user to enter two positive integers.
- Implements Euclid's algorithm:
  - **Iterative Approach**: Uses a `while` loop to calculate the GCD by repeatedly setting `b` to the remainder of `a` divided by `b`.
  - **Recursive Approach**: Uses a recursive function to compute the GCD by passing `(b, a % b)` until `b` is zero.
- Outputs the GCD computed by each approach.
- Includes error handling to ensure that only two positive integers are accepted as input.

## To Run:
```bash
gcc gcd.c -o gcd
./gcd
```