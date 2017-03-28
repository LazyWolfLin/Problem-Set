///LeetCode 18. 4Sum by C++
///write by LazyWolfLin in 17.03.28

class Solution
{
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target)
    {
        vector<vector<int> > ans;
        vector<int> tmp;
        sort(nums.begin(),nums.end());
        for (int i=0;i<nums.size();++i)
        {
            if ((i>0) && (nums[i]==nums[i-1])) continue;
            for (int j=i+1;j<nums.size();++j)
            {
                if ((j>i+1) && (nums[j]==nums[j-1])) continue;
                for (int k=j+1,l=nums.size()-1;k<l;)
                {
                    if (nums[i]+nums[j]+nums[k]+nums[l]==target)
                    {
                        tmp.clear();
                        tmp.push_back(nums[i]);
                        tmp.push_back(nums[j]);
                        tmp.push_back(nums[k]);
                        tmp.push_back(nums[l]);
                        ans.push_back(tmp);
                        ++k;--l;
                        while ((k<l) && (nums[k]==nums[k-1])) ++k;
                        while ((k<l) && (nums[l]==nums[l+1])) --l;
                    }
                    else if (nums[i]+nums[j]+nums[k]+nums[l]>target) --l;
                    else ++k;
                }
            }
        }
        return ans;
    }
};
