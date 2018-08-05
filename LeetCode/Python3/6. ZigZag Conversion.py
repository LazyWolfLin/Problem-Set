# LeetCode 6. ZigZag Conversion by Python3
# write by LazyWolfLin in 18.08.05

class Solution:
    def convert(self, s, numRows):
        """
        :type s: str
        :type numRows: int
        :rtype: str
        """
        if numRows == 1:
            return s
        key = 2 * numRows - 2
        ans = str()
        for i in range(0, len(s), key):
            ans += s[i]
        for i in range(1, numRows - 1):
            for j in range(i, len(s), key):
                ans += s[j]
                if j + key - 2 * i < len(s):
                    ans += s[j + key - 2 * i]
        for i in range(numRows - 1, len(s), key):
            ans += s[i]
        return ans