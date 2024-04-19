class Solution:
    def twoSum(self, nums, target: int):

        # nums = [2,7,11,15], target = 9
        comparison = 0
        answer_list = []


        for j in range(1,len(nums)):
            if nums[comparison] + nums[j] == target:
                answer_list.append(comparison)
                answer_list.append(j)
            else:
                comparison += 1
        
        return answer_list

run = Solution()
print(run.twoSum([2,7,11,15], 9))
