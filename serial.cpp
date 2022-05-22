#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

void initGrid(int *grid, int len);

int main(int argc, char **argv)
{
	const int rows = 10;
	const int cols = 10;
	
	int *grid = (int *) calloc(rows * cols, sizeof(int));
	int *grid_buf = (int *) calloc(rows * cols, sizeof(int));

	initGrid(grid, rows * cols);
	
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			int idx = i * cols + j;
			std::cout << "Grid value at: " << i << ", " << j << ": " << grid[idx] << std::endl;
		}
	}
	 	
	free(grid);
	free(grid_buf);
	return 0;
}

void initGrid(int *grid, int len)
{
	for(int i = 0; i < len; i++)
	{
		grid[i] = rand() % 2;
	}
}