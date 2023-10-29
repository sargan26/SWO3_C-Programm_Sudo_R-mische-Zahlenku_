#include <stdio.h>
#include <stdlib.h>

void printGrid(int grid[], int n) {
   printf("Initial sudoku: ");
   for (int i = 0; i < n; i++) {
      if (i % 9 == 0){
         printf("\n");
      } 
      printf("%3d", grid[i]);
   }
   printf("\n");
   printf("\n");
}


int main () {
   // easy difficulty
   int grid[81] = {
      7,0,4,9,0,0,5,6,8,
      0,1,0,0,0,0,3,4,0,
      0,8,0,2,0,4,1,0,0,
      8,0,5,1,0,2,0,0,4,
      0,0,0,5,3,8,0,0,0,
      2,3,1,4,7,9,0,0,0,
      1,7,0,0,0,0,0,0,6,
      6,0,2,0,9,1,0,0,0,
      0,0,0,7,2,0,8,0,1
   };
   printGrid(grid, 81);
   sudoku(grid);
   printf("\n");

   // hard difficulty
   int grid2[81] = {
      0,6,0,4,0,0,0,7,0,
      0,8,0,0,0,0,0,2,9,
      0,7,0,0,2,0,5,0,0,
      0,0,5,6,0,0,0,0,4,
      9,0,0,0,0,0,0,0,0,
      0,0,0,5,0,0,0,0,3,
      0,0,4,1,0,0,0,0,0,
      8,0,0,0,9,0,0,0,0,
      0,0,0,0,8,0,1,0,6
   };
   printGrid(grid2, 81);
   sudoku(grid2);
   printf("\n");

   // empty grid
   int grid3[81] = {
      0,
   };
   printGrid(grid3, 81);
   sudoku(grid3);
   printf("\n");
   
   return EXIT_SUCCESS;
}
