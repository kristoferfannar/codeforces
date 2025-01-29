from math import ceil

input()
lis = list(map(int, input().split()))


groups = {1: 0, 2: 0, 3: 0, 4: 0}

for group in lis:
    groups[group] += 1

debug = False


total = 0
if debug:
    print(f"total={total}, groups {groups}")

total += groups[4]
groups[4] -= groups[4]
if debug:
    print(f"total={total}, groups {groups}")

total += min(groups[3], groups[1])
sub = min(groups[3], groups[1])
groups[3] -= max(0, sub)
groups[1] -= max(0, sub)
if debug:
    print(f"total={total}, groups {groups}")

total += groups[2] // 2
groups[2] -= 2 * (groups[2] // 2)
if debug:
    print(f"total={total}, groups {groups}")

total += min(groups[2], ceil(groups[1] / 2))
sub = min(groups[2], ceil(groups[1] / 2))
groups[2] -= max(0, sub)
groups[1] -= max(2 * sub, 0)
if debug:
    print(f"total={total}, groups {groups}")

total += ceil(groups[1] / 4)
groups[1] -= max(0, groups[1])
if debug:
    print(f"total={total}, groups {groups}")

total += groups[3]
groups[3] -= groups[3]
if debug:
    print(f"total={total}, groups {groups}")

total += groups[2]
groups[2] -= groups[2]
if debug:
    print(f"total={total}, groups {groups}")

print(total)
