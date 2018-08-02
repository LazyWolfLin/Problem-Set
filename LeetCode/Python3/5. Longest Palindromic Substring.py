# LeetCode 5. Longest Palindromic Substring by Python3
# write by LazyWolfLin in 18.08.02

# Manacher Algorithms
class Solution:
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: str
        """
        t = "$#"
        for i in range(0, len(s)):
            t += s[i]
            t += "#"
        t += '!'
        f = [0]
        current_center = current_right = ans_len = ans_center = 0
        for i in range(1, len(t) - 1):
            f.append(min(f[2 * current_center - i], current_right - i) if current_right > i else 1)
            while t[i + f[i]] == t[i - f[i]]:
                f[i] += 1
            if i + f[i] > current_right:
                current_right = i + f[i]
                current_center = i
            if f[i] > ans_len:
                ans_len = f[i]
                ans_center = i
        return s[(ans_center - ans_len) // 2 : (ans_center + ans_len) // 2 - 1]