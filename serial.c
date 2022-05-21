#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int rows = atoi(argv[1]);
	int cols = atoi(argv[2]);
	
	int *grid = (int *) calloc(rows * cols, sizeof(int));
	
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
		{
			int idx = i * cols + j;
			printf("Grid Value at %d, %d: %d, Array Address: %d\n", i, j, grid[idx], idx);			
		}
	}
	 	
	free(grid);
	return 0;
}
