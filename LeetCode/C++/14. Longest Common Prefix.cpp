///LeetCode 14. Longest Common Prefix by C++
///write by LazyWolfLin in 17.03.23

class Solution
{
public:
    string longestCommonPrefix(vector<string>& strs)
    {
        string ans="\0";
        for (int i=0;i<strs[0].size();++i)
        {
            for (int j=1;j<strs.size();++j)
            {
                if (strs[0][i]!=strs[j][i])
                {
                    return ans;
                }
            }
            ans+=strs[0][i];
        }
        return ans;
    }
};