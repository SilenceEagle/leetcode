while True:
    try:
        n = int(input())
        while n:
            nums = list(map(int, input().split()))
            print(sum(nums[1:]))
            if n > 1:
                print()
            n -= 1
    except:
        break
# /**************************************************************
#     Problem: 1005
#     User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
#     Language: Python
#     Result: 正确
#     Time:139 ms
#     Memory:15744 kb
# ****************************************************************/