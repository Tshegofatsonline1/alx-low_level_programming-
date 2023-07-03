#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Function that frees 2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
int b;

for (b = 0; b < height; b++)
{
free(grid[b]);
}
free(grid);
}
