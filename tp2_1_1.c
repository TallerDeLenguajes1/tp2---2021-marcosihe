#include <stdio.h>

#define ROWS 4
#define COLUMNS 5

int main()
{
    int rows, columns;
    double array[ROWS][COLUMNS];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            printf("%lf   ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}