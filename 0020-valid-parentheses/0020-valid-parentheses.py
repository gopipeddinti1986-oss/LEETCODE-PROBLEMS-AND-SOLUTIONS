class Solution:
    def isValid(self, s: str) -> bool:
        res = []

        for i in range(len(s)):
            if s[i] == '(' or s[i] == '[' or s[i] == '{':
                res.append(s[i])
            else:
                if not res:
                    return False
                top = res.pop()

                if s[i] == ')' and top != '(':
                    return False
                if s[i] == ']' and top != '[':
                    return False
                if s[i] == '}' and top != '{':
                    return False
                
        return len(res) == 0