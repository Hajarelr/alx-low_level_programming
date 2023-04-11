#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Function that frees a 2 dimensional grid (created on task 3)
 * @grid: 1st input
 * @height: 2nd input
 * Return: void
 */
void free_grid(int **grid, int height)
{
int n;
for (n = 0 ; n < height ; n++)
{
free(grid[n]);
}
free(grid);
}

