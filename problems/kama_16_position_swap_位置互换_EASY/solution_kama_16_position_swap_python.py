while True:
    try:
        n = int(input())
        for _ in range(n):
            s = input()
            for i in range(0, len(s), 2):
                print(s[i+1], end='')
                print(s[i], end='')
            print()
    except Exception as e:
        # print(str(e))
        break
# /**************************************************************
#     Problem: 1015
#     User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
#     Language: Python
#     Result: 正确
#     Time:156 ms
#     Memory:15744 kb
# ****************************************************************/