class Node:
    def __init__(self, val, next=None):
        self.val = val
        self.next = next
 
class LinkedList:
    def __init__(self):
        self.dummyHead = Node(0)
        self.tail = self.dummyHead
        self.size = 0
     
    def append(self, val):
        self.tail.next = Node(val)
        self.tail = self.tail.next
        self.size += 1
     
    def show(self):
        if self.size:
            cur = self.dummyHead.next
            print(cur.val, end='')
            cur = cur.next
            while cur is not None:
                print(f' {cur.val}', end='')
                cur = cur.next
            print()
        else:
            print('list is empty')
     
    def reverse(self):
        pre = None
        cur = self.dummyHead.next
        while cur is not None:
            next = cur.next
            cur.next = pre 
            pre = cur
            cur = next
        self.dummyHead.next = pre
 
while True:
    try:
        nodes = list(map(int, input().split()))
        if nodes[0] == 0:
            print('list is empty')
        else:
            myL = LinkedList();
            for n in nodes[1:]:
                myL.append(n)
            myL.show()
            myL.reverse()
            myL.show()
    except Exception as e:
        # print(str(e))
        break
     
     
     
     
# /**************************************************************
#     Problem: 1018
#     User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
#     Language: Python
#     Result: 正确
#     Time:635 ms
#     Memory:36568 kb
# ****************************************************************/