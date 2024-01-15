from collections import deque

class Solution:
    def simplifyPath(self, path: str) -> str:
        dq = deque()
        cur = ""
        for i in range(len(path)):
            if ('/' != path[i] and i == len(path) - 1):
                cur += path[i]
            if ('/' == path[i] or i == len(path) - 1):
                if cur == "..":
                    if len(dq):
                        dq.pop()
                elif cur != '.' and len(cur):
                    dq.append(cur)
                cur = ""
            else:
                cur += path[i]
        ans = ""
        while len(dq):
            ans += "/"
            ans += dq.popleft()
        if len(ans) == 0:
            ans = "/"
        return ans
    

class Solution2:
    def simplifyPath(self, path: str) -> str:
        path = path.split('/')
        dq = deque([])
        for n in path:
            if n == "..":
                if len(dq):
                    dq.pop()
            elif n != "." and n != "":
                dq.append(n)
        ans = ""
        while len(dq):
            ans += "/"
            ans += dq.popleft()
        if len(ans) == 0:
            ans = "/"
        return ans
    

if __name__ == '__main__':
    so = Solution()
    path = "/a//b////c/d//././/../"
    ans = so.simplifyPath(path)  # "/a/b/c"
    print(ans)


