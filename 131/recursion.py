from time_complexity import timer


def rec(n: int) -> int:
    # base case
    if n == 0:
        return 0

    # recursive case
    # print(f"{n} + rec({n} - 1) + ")
    return n + rec(n - 1)


@timer
def start_rec(n: int) -> int:
    return rec(n)


@timer
def add_10() -> int:
    sum = 0
    for i in range(10):
        sum += i
    return sum


start_rec(10)
add_10()

# 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0 = 55
