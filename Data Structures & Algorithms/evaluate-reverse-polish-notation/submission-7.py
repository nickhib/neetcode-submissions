class Solution:
    def evalRPN(self, tokens: List[str]) -> int:

        stack = []
        answer = 0;
        for c in tokens:
            if c == '+' or c == '-' or c == '*' or c == '/':
                cur = 0
                if stack:
                    cur = stack.pop()
                    if c == '+':
                        cur = stack.pop()+ cur
                    elif c == '-':
                        cur = stack.pop() - cur
                    elif c == '*':
                        cur = int(stack.pop()* cur)
                    elif c == '/':
                        cur = int(stack.pop() / cur)
                    stack.append(cur)
                else:
                    return -1
            elif c.isdigit() or int(c) < 0:
                stack.append(int(c));
            else:
                return -1
        if stack:
            answer = stack[-1]
        return answer
                    



        