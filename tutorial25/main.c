#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    unsigned int m; // rows
    unsigned int n; // cols
    float **v;
} Matrix;

void *allocate_memory(size_t size)
{
    void *ptr;

    ptr = malloc(size);
    if (ptr == NULL)
    {
        fprintf(stderr, "Failed to allocate memory\n");
        exit(EXIT_FAILURE);
    }
    return ptr;
}

void free_memory(void **ptr)
{
    if (*ptr != NULL)
    {
        free(*ptr);
        *ptr = NULL;
    }
}

void allocate_matrix(unsigned int m, unsigned int n, Matrix *matrix)
{
    unsigned int i;

    matrix->v = (float **)allocate_memory(m * sizeof(float *));

    for (i = 0; i < m; i++)
    {
        matrix->v[i] = (float *)allocate_memory(n * sizeof(float));
    }
}

void free_matrix(Matrix *matrix)
{
    unsigned int i;

    for (i = 0; i < matrix->m; i++)
        free_memory((void **)&matrix->v[i]);
    free_memory((void **)&matrix->v);
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

    allocate_matrix(rows, cols, &matrix);

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

    free_matrix(&matrix);

    return 0;
}