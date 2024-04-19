class Solution:
    def isValid(self, s: str) -> bool:
        parentheses_pair = {
            "(":")",
            "[":"]",
            "{":"}"
        }

        parentheses_open = ["(","[","{"]
        parentheses_closed = [")","]","}"]

        valid = True
        pointer = 0

        for char in s:
            # if the first character in the string is a closed parentheses
            # it is not a valid string
            if pointer < 1 and char not in parentheses_open:
                valid = False
            if char in parentheses_open and s[pointer+1] != parentheses_closed[parentheses_open.index(char)]:
                valid = False

            pointer+=1

        return valid
        
s = Solution()
print(s.isValid("()[]{}"))