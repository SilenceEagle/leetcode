while True:
    try:
        nums = list(map(int, input().split()))
        if nums[0]:
            print(sum(nums[1:]))
        else:
            break
    except:
        break
# /**************************************************************
#     Problem: 1003
#     User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
#     Language: Python
#     Result: 正确
#     Time:152 ms
#     Memory:15744 kb
# ****************************************************************/