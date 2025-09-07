def max_neighbor(grid, x, y):
    n = []
    if y > 0:
        n.append(grid[y - 1][x])
    if y + 1 < len(grid):
        n.append(grid[y + 1][x])
    if x > 0:
        n.append(grid[y][x - 1])
    if x + 1 < len(grid[0]):
        n.append(grid[y][x + 1])

    return max(n)


def solve():
    n, _ = list(map(int, input().split()))
    grid = []

    for _ in range(n):
        row = list(map(int, input().split()))
        grid.append(row)

    for y in range(len(grid)):
        for x in range(len(grid[0])):
            mn = max_neighbor(grid, x, y)
            if grid[y][x] > mn:
                grid[y][x] = mn

    for row in grid:
        print(" ".join(map(str, row)))


t = int(input())
while t:
    t -= 1
    solve()
