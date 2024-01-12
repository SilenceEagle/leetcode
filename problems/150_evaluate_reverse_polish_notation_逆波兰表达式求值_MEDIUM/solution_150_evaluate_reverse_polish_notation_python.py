from typing import List

"""
int() 向零取整： int(-0.9) = 0, int(0.9) = 0
// 向下取整：-1 // 3 = -1, 7 // 4 = 1
"""
class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        st = []
        for s in tokens:
            if s == "+" or s == "-" or s == "*" or s == "/":
                b = st.pop()
                a = st.pop()
                if s == "+":
                    st.append(a+b)
                elif s == "-":
                    st.append(a-b)
                elif s == "*":
                    st.append(a*b)
                else:
                    st.append(int(a/b))
            else:
                st.append(int(s))
        return st[-1]
    

if __name__ == '__main__':
    so = Solution()
    tokens = ["10","6","9","3","+","-11","*","/","*","17","+","5","+"]
    print(so.evalRPN(tokens))