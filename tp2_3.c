#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 15
#define ELEMENTS 15

int main()
{
    srand(time(NULL));
    int columns, i, j, pair = 0;
    columns = 5 + rand() % (15 + 1 - 5);
    int *pointer_to_array = NULL;
    int *pointer_to_vector = NULL;

    pointer_to_array = (int *)malloc(sizeof(int) * ROWS * columns);
    pointer_to_vector = (int *)malloc(sizeof(int) * ELEMENTS);

    for (i = 0; i < ROWS; i++)
    {

        for (j = 0; j < columns; j++)
        {

            *(pointer_to_array + i * columns + j) = 100 + rand() % (999 + 1 - 100);

            printf("   %d ", *(pointer_to_array + i * columns + j));

            if (*(pointer_to_array + i * columns + j) % 2 == 0)
            {
                pair++;
            }
        }
        *(pointer_to_vector + i) = pair;
        printf(" <- %d Numeros pares en la fila %d", pair, i);
        printf("\n");
        pair = 0;
    }

    printf("\n\n*** Vector de cantidad de pares por filas ***\n");
    printf("\nVector:");
    for (int k = 0; k < ELEMENTS; k++)
    {
        printf("%d ", *(pointer_to_vector + k));
    }

    free(pointer_to_array);
    free(pointer_to_vector);

    return 0;
    getchar();
}