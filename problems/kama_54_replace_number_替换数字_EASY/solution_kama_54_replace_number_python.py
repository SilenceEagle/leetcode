while True:
    try:
        s = input()
        ans = ""
        for i, c in enumerate(s):
            if c < '0' or c > '9':
                ans += c;
            else:
                ans += "number"
        print(ans)
    except Exception as e:
        break
# /**************************************************************
#     Problem: 1064
#     User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
#     Language: Python
#     Result: 正确
#     Time:637 ms
#     Memory:15744 kb
# ****************************************************************/