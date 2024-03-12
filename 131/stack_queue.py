from collections import deque

stack = deque()
queue = deque()

for i in range(10):
    stack.append(i)
    queue.append(i)

for i in range(5):
    stack.pop()
    queue.popleft()

print(stack)
print(queue)
