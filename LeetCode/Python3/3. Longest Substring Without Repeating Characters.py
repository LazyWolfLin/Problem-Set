# LeetCode 3. Longest Substring Without Repeating Characters by Python3
# write by LazyWolfLin in 18.07.23

class Solution:
    def lengthOfLongestSubstring(self, s):
        """
        :type s: str
        :rtype: int
        """
        start = -1
        ans = 0
        letter = dict()
        for x, ch in enumerate(s):
            if ch in letter and letter[ch] > start:
                start = letter[ch]
            ans = max(ans, x - start)
            letter[ch] = x
        return ans