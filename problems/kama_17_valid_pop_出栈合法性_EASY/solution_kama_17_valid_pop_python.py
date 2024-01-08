while True:
    try:
        n = int(input())
        nums = list(map(int, input().split()))
        m = len(nums)
        mark = [0] * m
        yes = True
        big = 0
        for num in nums:
            big = max(big, num)
            if num < big and mark[num] == 0:
                yes = False
                break
            # mark as poped
            mark[num-1] = 1
        if yes:
            print('Yes')
        else:
            print('No')
             
    except Exception as e:
        # print(e)
        break
# /**************************************************************
#     Problem: 1016
#     User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
#     Language: Python
#     Result: 正确
#     Time:141 ms
#     Memory:15744 kb
# ****************************************************************/
