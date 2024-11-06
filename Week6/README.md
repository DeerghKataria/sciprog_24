# Week 6 Practical
This repository contains C program for Week 6 practical exercises: `matrixmultiplication.c`. The program performs matrix multiplication, demonstrating basic operations on two-dimensional arrays in C.

## Files Included:
`matrixmultiplication.c` - A program that multiplies two matrices, `A` and `B`, to produce a result matrix `C`. The matrices have predefined dimensions:
- `A` is a 5x3 matrix.
- `B` is a 3x4 matrix.
- The result, `C`, is a 5x4 matrix.

## Program Details:
- The elements of matrix `A` are initialized as `A[i][j] = i + j`.
- The elements of matrix `B` are initialized as `B[i][j] = i - j`.
- The result matrix `C` is calculated using matrix multiplication and is initially filled with zeros before computing the values.
- The program outputs the matrices `A`, `B`, and the resulting matrix `C`.

## To Run:
```bash
gcc matrixmultiplication.c -o matrixmultiplication
./matrixmultiplication
```
