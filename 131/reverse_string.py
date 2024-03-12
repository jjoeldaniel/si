def reverse(x: str) -> str:
    arr: list = list(x)
    l, r = 0, len(arr) - 1

    while l < r:
        arr[l], arr[r] = arr[r], arr[l]
        l += 1
        r -= 1

    return "".join(arr)


def main():
    while True:
        x = input("enter string to reverse: ")
        print(reverse(x))


if __name__ == "__main__":
    main()
