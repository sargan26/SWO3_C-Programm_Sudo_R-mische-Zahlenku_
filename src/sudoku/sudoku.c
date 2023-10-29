#include <stdio.h>
#include "sudoku.h"
#include <stdbool.h>

// steps to solve sudoku
int steps = 0;

// function to check, if it is safe to place the number at this position
bool isSafe(int grid[9][9], int row, int col, int num) {
    // check rows and columns
    for (int x = 0; x < 9; x++) {
        if (grid[row][x] == num || grid[x][col] == num) {
            return false;
        }
    }

    // check the inner 3x3 square
    int startRow = row - (row % 3);
    int startCol = col - (col % 3);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i + startRow][j + startCol] == num) {
                return false; 
            }
        }
    }
    return true;
}

bool solveSudoku(int grid[9][9]) {
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            
            if (grid[row][col] == 0) {
                for (int num = 1; num <= 9; num++) {
                    steps++;
                    if (isSafe(grid, row, col, num)) {
                        grid[row][col] = num;
                        if (solveSudoku(grid)) {
                            return true; // solution found
                        }
                        grid[row][col] = 0;
                    }
                }
                return false; // no solution for this configuration
            }
        }
    }
    return true; // sudoku solved
}

// function to print the sudoku
void printSudoku(int grid[9][9]) {
    for (int row = 0; row < 9; row++)
    {
        for (int col = 0; col < 9; col++)
        {
            printf("%2d ", grid[row][col]);
        }
        printf("\n");
    }
}

// main function to solve sudoku
void sudoku(int grid[81]) {
    int sudokuGrid[9][9];

    // convert one-dimensional array to two-dimensional array
    for (int i = 0; i < 81; i++)
    {
        int row = i / 9;
        int col = i % 9;
        sudokuGrid[row][col] = grid[i];
    }

    if (solveSudoku(sudokuGrid))
    {
        printf("Sudoku solved:\n");
        printSudoku(sudokuGrid);
        printf("Steps to solve sudoku: %d\n", steps);
    } else {
        printf("No solution found.\n");
    }

}