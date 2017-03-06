///LeetCode 1. Two Sum by C++
///write by LazyWolfLin in 16.08.29

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        //initialize
        vector<int> ans(2);//as return.
        map<int,int> indices;
        //calculation
        for (int i=0;i<nums.size();++i)
        {
            if (indices.count(target-nums[i])!=0)
            {
                ans[0]=indices[target-nums[i]];
                ans[1]=i;
                break;
            }
            indices.insert(make_pair(nums[i],i));
        }

        return ans;
    }
};
