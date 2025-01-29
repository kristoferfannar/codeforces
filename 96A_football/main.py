teams = input()

last = teams[0]
count = 1

for i in range(1, len(teams)):
    if count == 7:
        break
    if teams[i] == last:
        count += 1
    else:
        last = teams[i]
        count = 1


if count == 7:
    print("YES")
else:
    print("NO")
