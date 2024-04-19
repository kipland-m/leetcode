class Solution:
    def longestCommonPrefix(self, strs) -> str:
        result = ''

        # i is our pointer, and this loop will run as many times as there are characters in strs[0]
        for i in range(len(strs[0])):
            # for string in array of strings
            for str in strs:
                # if i is equal to the length of the current string
                # or if the i'th position of the current string is not equal
                if i == len(str) or str[i] != strs[0][i]:
                    return result
                
            result += strs[0][i]

        return result
                



s = Solution()
print(s.longestCommonPrefix(["flower","flow","flight","cat","racecar","rapscallion","rare","raberthy"]))