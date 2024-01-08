while True:
    try:
        n = int(input())
        if n == 0:
            break
        nums = list(map(int, input().split()))
        m = sum(nums) // n
        ans = 0
        for c in nums:
            if c > m:
                ans += c - m
        print(ans)
        print()
    except:
        break
# /**************************************************************
#     Problem: 1007
#     User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
#     Language: Python
#     Result: 正确
#     Time:158 ms
#     Memory:15744 kb
# ****************************************************************/
