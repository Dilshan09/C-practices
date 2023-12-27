#include <stdio.h>
#define row 4
#define column 4
int main()
{
    int  i, j;
    int firstMatrix[row][column], secondMatrix[row][column], resultMatrix[row][column];

     printf("Elements of first matrix : \n");//first matrix

    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++)
            scanf("%d", &firstMatrix[i][j]);

    printf("Elements of second matrix : \n");//second mtix

    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++)
            scanf("%d", &secondMatrix[i][j]);

    printf("Sum matrices : \n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)//summation
        {
            resultMatrix[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
            printf("%d\t",resultMatrix[i][j]);//print the new matrix
        }
        printf("\n");
    }

    return 0;
}
