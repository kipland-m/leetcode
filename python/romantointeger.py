class Solution:
    def romanToInt(self, s: str) -> int:
    
        # I can be placed before V (5) and X (10) to make 4 and 9. 
        # X can be placed before L (50) and C (100) to make 40 and 90. 
        # C can be placed before D (500) and M (1000) to make 400 and 900.

        roman_nums = {
            'I':1,
            'V':5,
            'X':10,
            'L':50,
            'C':100,
            'D':500,
            'M':1000
        }

        # user gives XVII how can we write an algorithm to intuitively add this?
        
        sum = 0
        
        count = -1

        # if current iter is less than previous iteration, you subtract 
        for i in range(len(s)):
            # if count is less than -1 (past the first iteration) and the
            # current numeral is less than the previous, subtract value
            if count < -1 and roman_nums[s[count]] < roman_nums[s[count+1]]:
                sum -= roman_nums[s[count]]
            else:
                sum += roman_nums[s[count]]
  
            count -= 1

        return sum

    
s = Solution()
print(s.romanToInt('MCMXCIV'))


