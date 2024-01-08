class Node:
    def __init__(self, val):
        self.val = val
        self.next = None
 
class LinkedList:
    def __init__(self):
        self.dummyHead = Node(0)
        self.size = 0
     
    def insert(self, index, val, display=False):
        # index start from 1 
        if index > self.size + 1:
            print('insert fail')
            return
        cur = self.dummyHead
        for _ in range(index-1):
            cur = cur.next
        tmp = cur.next
        cur.next = Node(val)
        cur.next.next = tmp
        self.size += 1
        if display:
            print('insert OK')
     
    def delete(self, index):
        # index start from 1 
        if index > self.size:
            print('delete fail')
            return
        cur = self.dummyHead
        for _ in range(index-1):
            cur = cur.next
        cur.next = cur.next.next
        print('delete OK')
        self.size -= 1
     
    def get(self, index):
        # index start from 1 
        if index > self.size:
            print('get fail')
            return
        cur = self.dummyHead.next
        for _ in range(index-1):
            cur = cur.next
        print(cur.val)
     
    def show(self):
        if self.size == 0:
            print('Link list is empty')
        else:
            cur = self.dummyHead.next
            print(cur.val, end='')
            cur = cur.next
            while cur is not None:
                print(' ', end='')
                print(cur.val, end='')
                cur = cur.next
            print()
     
 
while True:
    try:
        line = list(map(int, input().split()))
        li = LinkedList()
        for n in line[1:]:
            li.insert(1, n)
        m = int(input())
        for _ in range(m):
            line = input().split()
            if line[0] == "show":
                li.show()
            elif line[0] == "delete":
                li.delete(int(line[1]))
            elif line[0] == "insert":
                li.insert(int(line[1]), int(line[2]), display=True)
            elif line[0] == "get":
                li.get(int(line[1]))
    except Exception as e:
        # print(str(e))
        break
 
         
     
     
# /**************************************************************
#     Problem: 1017
#     User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
#     Language: Python
#     Result: 正确
#     Time:230 ms
#     Memory:16000 kb
# ****************************************************************/