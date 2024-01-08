mp = dict()
mp['A'] = 4
mp['B'] = 3
mp['C'] = 2
mp['D'] = 1
mp['F'] = 0
 
while True:
    try:
        sum = 0
        unknown = False
        s = input().split()
        for c in s:
            if c in mp:
                sum += mp[c]
            else:
                unknown = True
                break
        if unknown:
            print('Unknown')
        else:
            print(f'{sum/len(s):.2f}')
    except:
        break
# /**************************************************************
#     Problem: 1006
#     User: odCYZ6gY7T-I7f3eCqHkzb2RTJKc [kamaCoder70231]
#     Language: Python
#     Result: 正确
#     Time:143 ms
#     Memory:15744 kb
# ****************************************************************/
