#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * Return: Pointer to a newly allocated space in memory containing
 * the concatenated string or NULL on failure
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    if (width <= 0 || height <= 0)
        return NULL;

    grid = malloc(sizeof(int *) * height);

    if (grid == NULL)
        return NULL;

    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(sizeof(int) * width);

        if (grid[i] == NULL)
        {
            for (j = 0; j < i; j++)
                free(grid[j]);

            free(grid);
            return NULL;
        }

        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    return grid;
}
