while True:
    try:
        m, k = map(int, input().split())
        if m == 0 and k == 0:
            break
        sum = m 
        present = m // k 
        sum += present
        while m % k + present >= k:
            m = m % k + present
            present = m // k 
            sum += present
        print(sum)
    except:
        break
# /**************************************************************
#     Problem: 1009
#     User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
#     Language: Python
#     Result: 正确
#     Time:152 ms
#     Memory:15744 kb
# ****************************************************************/