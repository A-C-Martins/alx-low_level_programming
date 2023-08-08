#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: represent the row
 * @height: is for column
 *
 * Return: A pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int **modi_arrGrid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	modi_arrGrid = malloc(height * sizeof(int *));
	if (modi_arrGrid == NULL)
	{
		free(modi_arrGrid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		modi_arrGrid[i] = malloc(width * sizeof(int));
		if (modi_arrGrid[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(modi_arrGrid[i]);
			}
			free(modi_arrGrid);
			return (NULL);
		}
	}

	if (modi_arrGrid == NULL)
	{
		return (NULL);
	}

	/* assigning value */
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			modi_arrGrid[i][j] = 0;
		}
	}

	return (modi_arrGrid);
}
