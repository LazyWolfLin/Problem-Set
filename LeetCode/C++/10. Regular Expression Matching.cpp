///LeetCode 10. Regular Expression Matching by C++
///write by LazyWolfLin in 17.03.10

class Solution
{
public:
    bool isMatch(string s, string p)
    {
        bool** dp = new bool* [s.size() + 1];
        for (size_t i = 0; i < s.size() + 1; ++i)
        {
            dp[i] = new bool[p.size() + 1];
            memset(dp[i], false, (p.size() + 1) * sizeof(bool));
        }
        dp[s.size()][p.size()] = true;
        for (int i = s.size(); i >= 0; --i)
            for (int j = p.size() - 1; j >= 0; --j)
            {
                dp[i][j] = i < s.size() && (p[j] == s[i] || p[j] == '.');
                if (j + 1 < p.size() && p[j + 1] == '*')
                    dp[i][j] = dp[i][j + 2] || (dp[i][j] && dp[i + 1][j]);
                else
                    dp[i][j] = dp[i][j] && dp[i + 1][j + 1];
            }
        return dp[0][0];
    }
};
