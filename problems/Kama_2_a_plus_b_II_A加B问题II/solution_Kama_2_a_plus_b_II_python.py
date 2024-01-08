while True:
    try:
        n = int(input())
        for i in range(n):
            a, b = map(int, input().split())
            print(a+b)
    except:
        break
# /**************************************************************
#     Problem: 1001
#     User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
#     Language: Python
#     Result: 正确
#     Time:144 ms
#     Memory:15744 kb
# ****************************************************************/