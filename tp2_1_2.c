#include <stdio.h>
#define ROWS 4
#define COLUMNS 5

int main()
{
    int r, c;
    double *pointer_to_array;
    double array[ROWS][COLUMNS];
    pointer_to_array = &array[0][0];

    for (r = 0; r < ROWS; r++)
    {
        for (c = 0; c < COLUMNS; c++)
        {
            printf("%f ", *(pointer_to_array + (r * COLUMNS + c)));
        }
        printf("\n");
    }
    return 0;
}