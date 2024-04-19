class Solution:
    def isPalindrome(self, x: int) -> bool:

        if x < 0 or (x % 10 == 0 and x != 0):
            return False
        
        reversed_int = 0 

        while x > reversed_int:
            pop = x % 10
            x //= 10
            reversed_int = reversed_int * 10 + pop

        if x == reversed_int or x == reversed_int // 10:
            return True
        else:
            return False
            

s = Solution()

print(s.isPalindrome(1))