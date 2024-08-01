#include <stdio.h>

int main()
{
    // Declaration and initialization of a 2D array
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // Accessing and printing elements
    printf("Original matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Modify an element
    matrix[1][1] = 10;

    // Printing modified matrix
    printf("\nModified matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    // Finding dimensions
    int rows = sizeof(matrix) / sizeof(matrix[0]);
    int columns = sizeof(matrix[0]) / sizeof(matrix[0][0]);
    printf("\nMatrix dimensions: %d rows, %d columns\n", rows, columns);

    return 0;
}
