# Week 9 Practical

This repository contains the files and programs for Week 9 practical exercises: `magic_square.txt`, `not_magic_square.txt`, `main.c`, and `magic_square.h`. The programs demonstrate file handling, dynamic memory allocation, and matrix operations in C to check whether a given matrix is a magic square.

## Files Included

- **`magic_square.txt`** - Contains a sample magic square matrix for testing.
- **`not_magic_square.txt`** - Contains a non-magic square matrix for testing.
- **`main.c`** - The main program that reads a matrix from a file, allocates memory dynamically for the matrix, and checks if it is a magic square.
- **`magic_square.h`** - A header file defining the function `isMagicSquare` to determine if a matrix is a magic square.

## Program Details

### `main.c`
- Prompts the user to enter the name of a file containing a square matrix.
- Reads the number of lines in the file to determine the size of the matrix.
- Dynamically allocates memory for the matrix and reads its elements from the file.
- Calls the function `isMagicSquare` to check if the matrix is a magic square.
- Outputs whether the matrix is a magic square or not.
- Frees all dynamically allocated memory and closes the file after processing.

### `magic_square.h`
- Contains the implementation of the `isMagicSquare` function.
- A magic square is an \(n \times n\) matrix where:
  - The sum of each row, column, main diagonal, and secondary diagonal equals \(M = \frac{n(n^2 + 1)}{2}\).
  - The function ensures that all these conditions are satisfied.
- Returns `0` if the matrix is not a magic square or if \(n\) is negative, otherwise returns a non-zero value.

## To Run

Compile the program using `gcc`:

```bash
gcc main.c -o magic_square
./magic_square
```