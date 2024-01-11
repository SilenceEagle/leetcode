while True:
    try:
        n = int(input())
        s = input()
        ans = s[-n:]+s[:-n]
        print(ans)
    except Exception as e:
        # print(str(e))
        break
# /**************************************************************
#     Problem: 1065
#     User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
#     Language: Python
#     Result: 正确
#     Time:566 ms
#     Memory:15744 kb
# ****************************************************************/
