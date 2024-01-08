while True:
    try:
        n = int(input())
        # print(n)
        for _ in range(n):
            a = input().split()
            # print(a)
            for s in a:
                print(s[0].upper(), end='')
            print()
    except:
        break
     
# /**************************************************************
#     Problem: 1013
#     User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
#     Language: Python
#     Result: 正确
#     Time:142 ms
#     Memory:15744 kb
# ****************************************************************/
