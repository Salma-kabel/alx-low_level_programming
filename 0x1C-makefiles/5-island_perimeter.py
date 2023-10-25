#!/usr/bin/python3
""" returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    """Grid cells are connected horizontally/vertically (not diagonally)."""
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                if (i - 1) < 0:
                    perimeter += 1
                elif grid[i - 1][j] == 0:
                    perimeter += 1
                if (i + 1) >= len(grid[0]):
                    perimeter += 1
                elif grid[i + 1][j] == 0:
                    perimeter += 1
                if (j - 1) < 0:
                    perimeter += 1
                elif grid[i][j - 1] == 0:
                    perimeter += 1
                if (j + 1) >= len(grid):
                    perimeter += 1
                elif grid[i][j + 1] == 0:
                    perimeter += 1
    return(perimeter)
