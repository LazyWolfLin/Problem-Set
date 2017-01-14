///LeetCode 1. Two Sum C++
///write by LazyWolfLin in 16.08.29

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> res(2);//as return.
        map<int,int> indices;
        for (int i=0;i<nums.size();i++)
        {
            if (indices.count(target-nums[i])!=0)
            {
                res[0]=indices[target-nums[i]];
                res[1]=i;
                break;
            }
            indices.insert(make_pair(nums[i],i));
        }
        return res;
    }
};
