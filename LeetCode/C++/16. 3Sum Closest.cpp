///LeetCode 16. 3Sum Closest by C++
///write by LazyWolfLin in 17.03.25

class Solution
{
public:
    int threeSumClosest(vector<int>& nums, int target)
    {
        int ans=nums[0]+nums[1]+nums[2],tmp;
        sort(nums.begin(),nums.end());
        for (int i=0;i<nums.size();++i)
        {
            for (int j=i+1,k=nums.size()-1;j<k;)
            {
                tmp=nums[i]+nums[j]+nums[k];
                if (tmp==target) return target;
                if (abs(ans-target)>abs(tmp-target)) ans=tmp;
                if (tmp>target) --k;
                else ++j;
            }
        }
        return ans;
    }
};
