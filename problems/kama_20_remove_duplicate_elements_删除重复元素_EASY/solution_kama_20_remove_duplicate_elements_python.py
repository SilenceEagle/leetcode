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
     
    def deleteD(self):
        cur = self.dummyHead.next
        pre = self.dummyHead
        while cur is not None:
            if pre != self.dummyHead and cur.val == pre.val:
                pre.next = cur.next
                cur = cur.next
                self.size -= 1
            else:
                pre = cur
                cur = cur.next
    def show(self):
        if self.size == 0:
            print('list is empty')
        else:
            cur = self.dummyHead.next
            print(cur.val, end='')
            cur = cur.next
            while cur is not None:
                print(f' {cur.val}', end='')
                cur = cur.next
            print()
 
while True:
    try:
        nodes = list(map(int, input().split()))
         
        if nodes[0] == 0:
            print('list is empty')
        else:
            myL = LinkedList()
            for n in nodes[1:]:
                myL.append(n)
            myL.show()
            myL.deleteD()
            myL.show()
    except Exception as e:
        # print(str(e))
        break
     
             
          
                 
# /**************************************************************
#     Problem: 1019
#     User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
#     Language: Python
#     Result: 正确
#     Time:544 ms
#     Memory:36492 kb
# ****************************************************************/