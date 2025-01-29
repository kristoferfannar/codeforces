from math import ceil

m, n, a = map(int, input().split())
print(ceil(m / a) * ceil(n / a))
