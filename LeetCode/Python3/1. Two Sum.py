# LeetCode 1. Two Sum by Python3
# write by LazyWolfLin in 18.07.21

class Solution:
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        indices = dict()
        for i in range(0, len(nums)):
            if (target - nums[i]) in indices:
                return [indices[target - nums[i]], i]
            else:
                indices[nums[i]] = i;
        return [];