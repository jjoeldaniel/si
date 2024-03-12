def rec(n: int) -> int:
    # base case
    if n == 0:
        return 0

    # recursive case
    print(f"{n} + rec({n} - 1) + ")
    return n + rec(n - 1)


print(rec(10))

# 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0 = 55
