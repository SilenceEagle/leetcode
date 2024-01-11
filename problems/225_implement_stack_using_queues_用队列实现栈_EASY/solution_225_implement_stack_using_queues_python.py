from collections import deque

class MyStack:

    def __init__(self):
        self.qu = deque()


    def push(self, x: int) -> None:
        self.qu.append(x)


    def pop(self) -> int:
        if self.empty():
            return None
        for _ in range(len(self.qu) - 1):
            self.qu.append(self.qu.popleft())
        return self.qu.popleft()


    def top(self) -> int:
        if self.empty():
            return None
        back = self.pop()
        self.qu.append(back)
        return back


    def empty(self) -> bool:
        return len(self.qu) == 0



# Your MyStack object will be instantiated and called as such:
# obj = MyStack()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.top()
# param_4 = obj.empty()