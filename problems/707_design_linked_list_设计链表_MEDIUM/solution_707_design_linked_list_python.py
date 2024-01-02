class LinkedNode:
    def __init__(self, val=-1, next=None):
        self.val = val
        self.next = next

class MyLinkedList:

    def __init__(self):
        self.dummyHead = LinkedNode()
        self.size = 0

    def get(self, index: int) -> int:
        if 0 <= index < self.size:
            cur = self.dummyHead
            while index:
                cur = cur.next
                index -= 1
            return cur.next.val
        else:
            return -1


    def addAtHead(self, val: int) -> None:
        self.dummyHead.next = LinkedNode(val, self.dummyHead.next)
        self.size += 1

    def addAtTail(self, val: int) -> None:
        cur = self.dummyHead
        while (cur.next is not None):
            cur = cur.next
        cur.next = LinkedNode(val)
        self.size += 1

    def addAtIndex(self, index: int, val: int) -> None:
        if 0 <= index <= self.size:
            cur = self.dummyHead
            while index:
                cur = cur.next
                index -= 1
            tmp = LinkedNode(val, cur.next)
            cur.next = tmp
            self.size += 1
            

    def deleteAtIndex(self, index: int) -> None:
        if 0 <= index < self.size:
            cur = self.dummyHead
            while index:
                cur = cur.next
                index -= 1
            cur.next = cur.next.next
            self.size -= 1



# Your MyLinkedList object will be instantiated and called as such:
# obj = MyLinkedList()
# param_1 = obj.get(index)
# obj.addAtHead(val)
# obj.addAtTail(val)
# obj.addAtIndex(index,val)
# obj.deleteAtIndex(index)