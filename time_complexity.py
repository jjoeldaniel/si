import time
from typing import Callable


def timer(func: Callable):
    """
    Logs runtime of a function
    """

    def wrapper(*args, **kwargs):
        start = time.time()
        func(*args, **kwargs)
        end = time.time()
        print("Time elapsed: %f seconds" % (end - start))

    return wrapper


# Initialize array of integers
arr: list[int] = []
for i in range(0, 1000):
    arr.append(i)


@timer
def test():
    # for (int i = 0; i < arr.size(); i++)
    for _ in arr:
        pass


@timer
def test2():
    for _ in arr:
        for _ in arr:
            pass


test()
test2()

# Output:
# Time elapsed: 0.000064 seconds
# Time elapsed: 0.428595 second
