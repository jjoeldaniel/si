from collections import deque

string = input().strip()


def validate_string(x: str):
    stack = deque([])

    # All our opening parenthesis
    openings = {"{", "(", "["}

    # All closing:opening pairs
    pairs = {"}": "{", "]": "[", ")": "("}

    # for (int i = 0; i < size; i++)
    for i,c in enumerate(x):
        # Add openings ( { [
        if c in openings:
            stack.append(c)
        else:
            # Compare top of stack to `c`'s corresponding opening from our map
            top = stack.pop()

            # If no match, then invalid parenthesis
            if pairs[c] != top:
                return False

    return not stack


if validate_string(string):
    print("valid")
else:
    print("invalid")
