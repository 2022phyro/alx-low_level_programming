#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free the previous memory allocated to a grid
 *
 * @grid: the array memory to be freed
 * @height: the number of rows
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
