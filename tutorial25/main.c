#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    unsigned int m; // rows
    unsigned int n; // cols
    float **v;
} Matrix;

float **allocate_matrix(unsigned int m, unsigned int n)
{
    float **A;
    unsigned int i;

    A = (float **)malloc(m * sizeof(float *));

    if (A == NULL)
    {
        fprintf(stderr, "Failed to allocate memory\n");
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < m; i++)
    {
        A[i] = (float *)malloc(n * sizeof(float));
        if (A[i] == NULL)
        {
            fprintf(stderr, "Failed to allocate memory\n");
            exit(EXIT_FAILURE);
        }
    }

    return A;
}

void **free_matrix(Matrix matrix)
{
    unsigned int i;

    for (i = 0; i < matrix.m; i++)
        free(matrix.v[i]);
    free(matrix.v);

    return NULL;
}

int main(int argc, char *argv[])
{
    if (argc < 3)
    {
        fprintf(stderr, "Usage:\n./main <num_rows> <num_cols>\n");
        return EXIT_FAILURE;
    }

    unsigned int rows = atoi(argv[1]);
    unsigned int cols = atoi(argv[2]);
    unsigned int i, j;
    Matrix matrix;

    matrix.v = allocate_matrix(rows, cols);

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("Type the value for A[%d][%d]:\n", i, j);
            scanf("%f", &matrix.v[i][j]);
        }
    }

    printf("The matrix you typed is given by:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf(" %f", matrix.v[i][j]);
        }
        printf("\n");
    }

    free_matrix(matrix);

    return 0;
}