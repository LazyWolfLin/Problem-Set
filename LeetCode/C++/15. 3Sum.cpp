///LeetCode 15. 3Sum by C++
///write by LazyWolfLin in 17.03.24

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        vector<vector<int> > ans;
        vector<int> tmp;
        sort(nums.begin(),nums.end());
        for (int i=0;i<nums.size();++i)
        {
            if ((i>0) && (nums[i]==nums[i-1])) continue;
            for (int j=i+1,k=nums.size()-1;j<k;)
            {
                if (nums[i]+nums[j]+nums[k]==0)
                {
                    tmp.clear();
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[j]);
                    tmp.push_back(nums[k]);
                    ans.push_back(tmp);
                    ++j;--k;
                    while ((j<k) && (nums[j]==nums[j-1])) ++j;
                    while ((j<k) && (nums[k]==nums[k+1])) --k;
                }
                else if (nums[i]+nums[j]+nums[k]>0) --k;
                else ++j;
            }
        }
        return ans;
    }
};
