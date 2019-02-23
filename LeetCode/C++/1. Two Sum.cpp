/// LeetCode 1. Two Sum by C++
/// write by LazyWolfLin in 16.08.29

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> indices;
        for (size_t i = 0; i < nums.size(); ++i)
        {
            auto iter = indices.find(target - nums[i]);
            if (iter != indices.end())
                return {iter->second, i};
            indices[nums[i]] = i;
        }
        return {};
    }
};