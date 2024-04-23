nums = [0, 1]
n = 10


def fib(l: list[int], n: int):
    # base case
    if len(l) >= n:
        return l

    # recursive
    s = l[-1] + l[-2]
    l.append(s)
    fib(l, n)


fib(nums, n)
print(nums)
