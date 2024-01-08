while True:
    try:
        n = int(input())
        for _ in range(n):
            s1 = input()
            s2 = input()
            l1 = len(s1)
            print(s1[:l1//2]+s2+s1[l1//2:])
    except Exception as e:
        # print(str(e))
        break
# /**************************************************************
#     Problem: 1014
#     User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
#     Language: Python
#     Result: 正确
#     Time:157 ms
#     Memory:15744 kb
# ****************************************************************/
