#include <stdio.h>

// This is an interface provided for the problem
int BinaryMatrix_get(int row, int col);
int* BinaryMatrix_dimensions();

int leftMostColumnWithOne(int** mat, int matSize, int* matColSize) {
    int* dimensions = BinaryMatrix_dimensions();
    int rows = dimensions[0];
    int cols = dimensions[1];
    
    int result = -1;
    int row = 0;
    int col = cols - 1;
    
    while (row < rows && col >= 0) {
        if (BinaryMatrix_get(row, col) == 1) {
            result = col;
            col--;
        } else {
            row++;
        }
    }
    
    return result;
}

int main() {
    int matSize = 2;
    int matColSize[] = {2, 2};
    int mat[2][2] = {{0, 0}, {1, 1}};
    
    int result = leftMostColumnWithOne((int**)mat, matSize, matColSize);
    
    printf("Output: %d\n", result);
    
    return 0;
}
