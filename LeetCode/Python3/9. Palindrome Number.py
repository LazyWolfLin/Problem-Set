# LeetCode 9. Palindrome Number by Python3
# write by LazyWolfLin in 18.08.14

class Solution:
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        x = str(x)
        return x == x[::-1]