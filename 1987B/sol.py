def solve():
    _ = int(input())
    a = list(map(int, input().split()))

    curr_max = a[0]
    diff_max = 0
    coins = 0

    for i in a:
        if i < curr_max:
            coins += curr_max - i
            diff_max = max(diff_max, curr_max - i)

        curr_max = max(curr_max, i)

    print(coins + diff_max)


t = int(input())
while t:
    t -= 1
    solve()
