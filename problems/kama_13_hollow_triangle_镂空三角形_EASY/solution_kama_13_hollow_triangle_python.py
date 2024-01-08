while True:
    try:
        s = input().split()
        c = s[0]
        if c == "@":
            break
        n = int(s[1])
        for i in range(1, n):
            left_space = n - i
            mid_space = max(0, 2 * (i - 1) - 1)
            for j in range(left_space):
                print(' ', end='')
            print(c, end='')
            if mid_space:
                for k in range(mid_space):
                    print(' ', end='')
                print(c, end='')
            print()
        for i in range(2 * n -1):
            print(c, end='')
        print()
        print()
    except:
        break
# /**************************************************************
#     Problem: 1012
#     User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
#     Language: Python
#     Result: 正确
#     Time:147 ms
#     Memory:15744 kb
# ****************************************************************/