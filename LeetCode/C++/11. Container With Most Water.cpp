///LeetCode 11. Container With Most Water by C++
///write by LazyWolfLin in 17.03.11

class Solution
{
public:
    int maxArea(vector<int>& height)
    {
        int l=0,r=height.size()-1,ans=0;
        while (l<r)
        {
            ans=max(ans,(r-l)*min(height[l],height[r]));
            if (height[l]<height[r]) ++l;
            else --r;
        }
        return ans;
    }
};
