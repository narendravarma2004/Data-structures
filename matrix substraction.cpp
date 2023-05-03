#include <stdio.h>
int main() 
{
    int rows, columns, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    int firstMatrix[rows][columns], secondMatrix[rows][columns], sumMatrix[rows][columns];
    printf("\nEnter the elements of the first matrix:\n");
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < columns; j++) 
		{
            printf("Enter element (%d,%d): ", i + 1, j + 1);
            scanf("%d", &firstMatrix[i][j]);
        }
    }
    printf("\nEnter the elements of the second matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) 
		{
            printf("Enter element (%d,%d): ", i + 1, j + 1);
            scanf("%d", &secondMatrix[i][j]);
        }
    }
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < columns; j++) 
		{
            sumMatrix[i][j] = firstMatrix[i][j] - secondMatrix[i][j];
        }
    }
    printf("\nSum of the matrices:\n");
    for (i = 0; i < rows; i++) 
	{
        for (j = 0; j < columns; j++) 
		{
            printf("%d ", sumMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
