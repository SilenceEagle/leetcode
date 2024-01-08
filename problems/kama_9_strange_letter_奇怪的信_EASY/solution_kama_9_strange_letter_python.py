while True:
    try:
        n = input()
        sum = 0
        for c in n:
            a = int(c)
            if a % 2 == 0:
                sum += a 
        print(sum)
        print()
                 
    except:
        break
         
# /**************************************************************
#     Problem: 1008
#     User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
#     Language: Python
#     Result: 正确
#     Time:151 ms
#     Memory:15744 kb
# ****************************************************************/
