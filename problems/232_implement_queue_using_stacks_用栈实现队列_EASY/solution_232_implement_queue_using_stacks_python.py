class MyQueue:
    def __init__(self):
        self.input = []
        self.out = []


    def push(self, x: int) -> None:
        self.input.append(x)


    def pop(self) -> int:
        if len(self.out):
            return self.out.pop()
        else:
            for _ in range(len(self.input) - 1):
                self.out.append(self.input.pop())
            return self.input.pop()


    def peek(self) -> int:
        front = self.pop()
        self.out.append(front)
        return front


    def empty(self) -> bool:
        return not(self.input + self.out)



# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()