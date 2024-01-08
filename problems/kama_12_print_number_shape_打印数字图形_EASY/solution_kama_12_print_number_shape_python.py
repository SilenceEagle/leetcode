while True:
    try:
        n = int(input())
        for i in range(1, n+1):
            s = [' '] * (n - i) 
            for j in range(1, i+1):
                s.append(f'{j}')
            for j in range(i-1, 0, -1):
                s.append(f'{j}')
            s = ''.join(s)
            print(s)
        for i in range(n-1, 0, -1):
            s = [' '] * (n - i)
            for j in range(1, i+1):
                s.append(f'{j}')
            for j in range(i-1, 0, -1):
                s.append(f'{j}')
            s = ''.join(s)
            print(s)
             
    except:
        break
# /**************************************************************
#     Problem: 1011
#     User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
#     Language: Python
#     Result: 正确
#     Time:144 ms
#     Memory:15744 kb
# ****************************************************************/