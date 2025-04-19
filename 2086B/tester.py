

NUM1 = 100_000
NUM2 = 100_000
NUM3 = 100_000_000
NUM4 = NUM1 * NUM2 * NUM3

with open("test.in", "w") as f:
    f.write(f"1\n{NUM1} {NUM2} {NUM4}\n")
    for i in range(NUM1):
        f.write(f"{NUM3} ")
