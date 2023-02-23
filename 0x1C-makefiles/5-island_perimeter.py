#!/usr/bin/python3
"""Tihs module contains the solution of no 5"""


def island_perimeter(grid):
    """This function attempts to get the perimeter of an island"""
    ans = 0
    let = len(grid)
    size = len(grid[0])
    for i in range(let):
        for j in range(size):
            if grid[i][j] == 1:
                if j == 0 or j == size - 1:
                    ans += 1
                if i == 0 or i == let - 1:
                    ans += 1
                if (i - 1 >= 0) and grid[i - 1][j] == 0:
                    ans += 1
                if (i + 1 < let) and grid[i + 1][j] == 0:
                    ans += 1
                if (j - 1 >= 0) and grid[i][j - 1] == 0:
                    ans += 1
                if (j + 1 < size) and grid[i][j + 1] == 0:
                    ans += 1
    return ans
