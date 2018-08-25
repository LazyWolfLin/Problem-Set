# LeetCode 10. Regular Expression Matching by Python3
# write by LazyWolfLin in 18.08.25

class Solution:
    def isMatch(self, s, p):
        """
        :type s: str
        :type p: str
        :rtype: bool
        """
        dp = [[False] * (len(p) + 1) for i in range(len(s) + 1)]

        dp[len(s)][len(p)] = True
        for i in range(len(s), -1, -1):
            for j in range(len(p) - 1, -1, -1):
                dp[i][j] = i < len(s) and p[j] in {s[i], '.'}
                if j + 1 < len(p) and p[j + 1] == '*':
                    dp[i][j] = dp[i][j + 2] or (dp[i][j] and dp[i + 1][j])
                else:
                    dp[i][j] = dp[i][j] and dp[i + 1][j + 1]

        return dp[0][0]