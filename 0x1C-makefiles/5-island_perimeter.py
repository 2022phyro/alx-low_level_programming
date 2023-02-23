#!/usr/bin/python3
"""Tihs module contains the solution of no 5"""


def island_perimeter(grid):
    """This function attempts to get the perimeter of an island"""
    if not grid:
        return
    ans = 0
    mark1 = 0
    mark2 = 0
    flag = False
    for i in range(len(grid)):
        m = len(grid[i])
        for j in range(m):
            if grid[i][j] == 1:
                flag = True
                ans += 4
                mark2 = j
                break
        if flag is True:
            mark1 = i
            break
    if (mark1 == 0) and (mark2 == 0):
        return
    for m in range(mark2 + 1, len(grid[mark1])):
        if grid[mark1][m] == 1 and grid[mark1][m - 1] == 1:
            ans += 2
    for i in range(mark1 + 1, len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                ans += 2
    return ans
