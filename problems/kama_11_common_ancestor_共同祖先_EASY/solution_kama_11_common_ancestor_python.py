while True:
    try:
        n = int(input())
        father = [0] * 21
        while n:
            c, f = map(int, input().split())
            n -= 1
            father[c] = f
        c1, c2 = 0, 0
        f1 = father[1]
        while f1:
            c1 += 1
            f1 = father[f1]
         
        f2 = father[2]
        while f2:
            c2 += 1
            f2 = father[f2]
         
        if (c1 < c2):
            print('You are my younger')
        elif (c1 > c2):
            print("You are my elder")
        else:
            print("You are my brother")
    except:
        break
# /**************************************************************
#     Problem: 1010
#     User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
#     Language: Python
#     Result: 正确
#     Time:146 ms
#     Memory:15744 kb
# ****************************************************************/